#include "subjectNode.h"
#include "vectorReaderFunc.h"

//=========================================================
std::string subjectNode::getTitle()
{
    return title;
}

void subjectNode::setTitle(std::string input)
{
    input = title;
}

//=========================================================
void subjectNode::setLink(std::string input)
{
    input = link;
}

std::string subjectNode::getLink()
{
    return link;
}

//Children Memory=========================================
/*This function has got to add a child node via its name
to a vector in memory.
We  need to make it so you cant add a child more than
once.
*/

bool subjectNode::addChild(std::string input) 
{
    if (mAstro::stringVectDupeCheck(childNames, input)) {
        std::cout << "Erroneous Input: "<< input <<" already is a child of " << title;
        return 0;
    }
    else {
        childNames.push_back(input);
        std::cout << input << " added as a child to " << title;
        return 1;
    }
}

void subjectNode::removeChild(int childNum) 
{
    childNames.erase(childNames.begin() + childNum - 1);
}

std::string subjectNode::getChild(int childNum) 
{
    return childNames[childNum];
}

int subjectNode::getNumberofChildren()
{
    return childNames.size();
}

//Taxonomy Tag Memory======================================
void subjectNode::addTaxTag(std::string input) 
{

}

void subjectNode::removeTaxTag(int taxNum) 
{
}

std::string subjectNode::getTaxTag(int taxNum) 
{
    return std::string();
}

//=========================================================
void subjectNode::setCompTag(compStatus input)
{
    compTag = input;
}

compStatus subjectNode::getCompTag()
{
    return compTag;
}
