//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : StaticData.h
//  @ Date : 2017/9/29
//  @ Author : wangjie
//
//


#if !defined(_STATICDATA_H)
#define _STATICDATA_H


class StaticData {
public:
	void StaticData();
	StaticData sharedStaticData();
	void purge();
	int intyValueForKey(std::string key);
	int stringValueFromKey(std::string key);
	float floatValueFromKey(std::string key);
	bool booleanFromKey(std::string key);
	cocos2d::CCPoint pointFromKey(std::string key);
	cocos2d::CCRect rectFromKey(std::string key);
	cocos2d::CCSize sizeFromKey(std::string key);
protected:
	cocos2d::CCDictionary _dictionary;
	std::string _staticFileName;
	bool init();
private:
	StaticData();
};

#endif  //_STATICDATA_H
