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

void subjectNode::addChild(std::string input) 
{
    if (mAstro::stringVectDupeCheck(childNames, input)) {
        std::cout << "Erroneous Input: "<< input <<" already is a child of " << title;
        return;
    }



}

void subjectNode::removeChild(int childNum) 
{
}

std::string subjectNode::getChild(int childNum) 
{
    return std::string();
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
