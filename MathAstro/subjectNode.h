#include <iostream>
#include <vector>
#include "nodePositioner.h"
#include "compEnum.h"

#ifndef _SUBJECT_NODE_H_
#define _SUBJECT_NODE_H_
class subjectNode {
private:
    std::string title;
    std::string link;
    std::vector<std::string> childNames;
    std::vector<std::string> taxTags;
    
    compStatus compTag;
    void setCompTag(compStatus input);

public:
    std::string getTitle();
    void setTitle(std::string input);

    void setLink(std::string input);
    std::string getLink();

    bool addChild(std::string input);
        //Returns false if input child already exists
    void removeChild(int childNum);
    std::string getChild(int childNum);
    int getNumberofChildren();

    bool addTaxTag(std::string input);
        //returns false if input taxtag already exists
    void removeTaxTag(int taxNum);
    std::string getTaxTag(int taxNum);
    int getNumberofTaxTags();

    compStatus getCompTag();
    void setCompTagIncomplete();
    void setCompTagComplete();
    void setCompTagStub();

    nodePositioner location;
};
#endif

