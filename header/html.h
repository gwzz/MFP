#ifndef MFP_HTML_H_
#define MFP_HTML_H_

#include <vector>
#include <string>
#include <map>
class Html
{
	std::vector<std::string> file_chunk;
public:
	Html(std::string filename);
	void Print();

};
#endif // MFP_HTML_H_