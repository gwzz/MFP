#ifndef MFP_HTML_H_
#define MFP_HTML_H_

#include <vector>
#include <string>
#include <map>
class Html
{
	std::vector<std::string> file_chunk;
	std::vector<std::string> markdown_file;
public:
	Html(std::string filename);
	void Parse();
	void ToMarkdown();

};
#endif // MFP_HTML_H_