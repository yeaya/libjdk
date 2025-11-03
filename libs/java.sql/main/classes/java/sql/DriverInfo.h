#ifndef _java_sql_DriverInfo_h_
#define _java_sql_DriverInfo_h_
//$ class java.sql.DriverInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {
		class Driver;
		class DriverAction;
	}
}

namespace java {
	namespace sql {

class DriverInfo : public ::java::lang::Object {
	$class(DriverInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DriverInfo();
	void init$(::java::sql::Driver* driver, ::java::sql::DriverAction* action);
	virtual ::java::sql::DriverAction* action();
	virtual bool equals(Object$* other) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::java::sql::Driver* driver = nullptr;
	::java::sql::DriverAction* da = nullptr;
};

	} // sql
} // java

#endif // _java_sql_DriverInfo_h_