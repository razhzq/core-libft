const fs = require("fs");

function formatCCode(filePath) {
    try {
        // Read the C file content
        const inputCode = fs.readFileSync(filePath, "utf-8");

        // Define a regex pattern to detect and preserve header comments or special blocks
        const headerBlockRegex = /\/\*[\s\S]*?\*\//g;

        // Extract header blocks
        const headerBlocks = inputCode.match(headerBlockRegex) || [];

        // Placeholder to temporarily replace header blocks
        let codeWithoutHeaders = inputCode.replace(headerBlockRegex, (match, index) => `/*HEADER_BLOCK_${index}*/`);

        // Format the rest of the code (excluding header blocks)
        let formattedCode = codeWithoutHeaders;

        // Apply formatting rules (same as before)
        formattedCode = formattedCode.replace(/^ +/gm, (match) => "\t".repeat(match.length / 4));
        formattedCode = formattedCode.split("\n").map((line) => {
            const maxLineLength = 80;
            if (line.length > maxLineLength) {
                const splitIndex = line.lastIndexOf(" ", maxLineLength);
                return line.slice(0, splitIndex) + "\n" + "\t" + line.slice(splitIndex + 1);
            }
            return line;
        }).join("\n");
        formattedCode = formattedCode.replace(/}\n([^\n])/g, "}\n\n$1");
        formattedCode = formattedCode.replace(/;\s*/g, ";\n");
        formattedCode = formattedCode.replace(/[ \t]+$/gm, "");
        formattedCode = formattedCode.replace(/ {2,}/g, " ");
        formattedCode = formattedCode.replace(/{/g, "{\n").replace(/}/g, "\n}");
        formattedCode = formattedCode.replace(/,(\S)/g, ", $1").replace(/;(\S)/g, "; $1");
        formattedCode = formattedCode.replace(/(\S)([+\-*/=<>!&|]{1,2})(\S)/g, "$1 $2 $3");
        formattedCode = formattedCode.replace(/\b(if|for|while|return|else)\b(\S)/g, "$1 $2");
        formattedCode = formattedCode.replace(/(int|char|float|double|long|short)\s+(\*?\w+)/g, "\t$1 $2");
        formattedCode = formattedCode.replace(/(\b(int|char|float|double|long|short|void)\b[^\n]+;\n)([^\n]+;)/g, "$1\n$3");
        formattedCode = formattedCode.replace(/,(\s*\w+\s*=[^,]+)/g, ";\n\t$1");
        formattedCode = formattedCode.replace(/(if|for|while|else)\s+\(([^)]+)\)(\s*[^;{])/g, "$1 ($2) {\n\t$3\n}");
        formattedCode = formattedCode.replace(/(\S)(\{)/g, "$1\n{");
        const lines = formattedCode.split("\n");
        formattedCode = lines.map((line, index) => {
            if (line.includes("{")) {
                const start = index;
                let end = index;
                let openBraces = 1;
                while (openBraces > 0 && end < lines.length - 1) {
                    end++;
                    if (lines[end].includes("{")) openBraces++;
                    if (lines[end].includes("}")) openBraces--;
                }
                const functionLength = end - start - 1;
                if (functionLength > 25) {
                    console.warn(`Warning: Function starting at line ${start + 1} exceeds 25 lines.`);
                }
            }
            return line;
        }).join("\n");
        formattedCode = formattedCode.replace(/^\s*$/gm, "");

        // Restore header blocks into their original positions
        headerBlocks.forEach((header, index) => {
            formattedCode = formattedCode.replace(`/*HEADER_BLOCK_${index}*/`, header);
        });

        // Write the formatted code back to the file
        fs.writeFileSync(filePath, formattedCode);
        console.log(`Formatted code written back to ${filePath}`);
    } catch (err) {
        console.error(`Error processing file ${filePath}: ${err.message}`);
    }
}

// Example usage
const filePath = "../part1/ft_toupper.c"; // Replace with your file path
formatCCode(filePath);
