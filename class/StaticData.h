//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : 211506344	
//  @ File Name : StaticData.h
//  @ Date : 2017/9/30/����
//  @ Author : ����
//
//


#if !defined(_STATICDATA_H)
#define _STATICDATA_H
#define STATIC_DATA_FILENAME "static_data.plist"
#define STATIC_DATA_STRING(key) StaticData::sharedStaticData()->stringValueFromKey(key)
#define STATIC_DATA_INT(key) StaticData::sharedStaticData()->intValueFromKey(key)
#define STATIC_DATA_FlOAT(key) StaticData::sharedStaticData()->floatValueFromKey(key)
#define STATIC_DATA_BOOL(key) StaticData::sharedStaticData()->booleanFromKey(key)
#define STATIC_DATA_POINT(key) StaticData::sharedStaticData()->pointFromKey(key)
#define STATIC_DATA_RECT(key) StaticData::sharedStaticData()->rectFromKey(key)
#define STATIC_DATA_SIZE(key) StaticData::sharedStaticData()->sizeFromKey(key)
#using <mscorlib.dll>

class StaticData {
public:
	StaticData* sharedStaticData();
	StaticData::bool init();
	void stringFromKey(std::string Key);
	int intFromKey(std::string Key);
	int floatFromKey(std::string Key);
	bool booleanFromKey(std::string Key);
	cocos2d::CCPoint pointFromKey(std::string Key);
	cocos2d::CCRect rectFromKey(std::string Key);
	cocos2d::CCSize sizeFromKey(std::string Key);
	void purge();
protected:
	cocos2d::CCDictionary _dictionary;
	std::string _staticFileName;
private:
	StaticData();
	~StaticData();
};

#endif  //_STATICDATA_H
