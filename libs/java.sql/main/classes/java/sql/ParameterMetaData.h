#ifndef _java_sql_ParameterMetaData_h_
#define _java_sql_ParameterMetaData_h_
//$ interface java.sql.ParameterMetaData
//$ extends java.sql.Wrapper

#include <java/sql/Wrapper.h>

namespace java {
	namespace sql {

class $export ParameterMetaData : public ::java::sql::Wrapper {
	$interface(ParameterMetaData, $NO_CLASS_INIT, ::java::sql::Wrapper)
public:
	virtual $String* getParameterClassName(int32_t param) {return nullptr;}
	virtual int32_t getParameterCount() {return 0;}
	virtual int32_t getParameterMode(int32_t param) {return 0;}
	virtual int32_t getParameterType(int32_t param) {return 0;}
	virtual $String* getParameterTypeName(int32_t param) {return nullptr;}
	virtual int32_t getPrecision(int32_t param) {return 0;}
	virtual int32_t getScale(int32_t param) {return 0;}
	virtual int32_t isNullable(int32_t param) {return 0;}
	virtual bool isSigned(int32_t param) {return false;}
	static const int32_t parameterNoNulls = 0;
	static const int32_t parameterNullable = 1;
	static const int32_t parameterNullableUnknown = 2;
	static const int32_t parameterModeUnknown = 0;
	static const int32_t parameterModeIn = 1;
	static const int32_t parameterModeInOut = 2;
	static const int32_t parameterModeOut = 4;
};

	} // sql
} // java

#endif // _java_sql_ParameterMetaData_h_