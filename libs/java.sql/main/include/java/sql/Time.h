#ifndef _java_sql_Time_h_
#define _java_sql_Time_h_
//$ class java.sql.Time
//$ extends java.util.Date

#include <java/util/Date.h>

namespace java {
	namespace time {
		class Instant;
		class LocalTime;
	}
}

namespace java {
	namespace sql {

class $import Time : public ::java::util::Date {
	$class(Time, $NO_CLASS_INIT, ::java::util::Date)
public:
	Time();
	void init$(int32_t hour, int32_t minute, int32_t second);
	void init$(int64_t time);
	virtual int32_t getDate() override;
	virtual int32_t getDay() override;
	virtual int32_t getMonth() override;
	virtual int32_t getYear() override;
	virtual void setDate(int32_t i) override;
	virtual void setMonth(int32_t i) override;
	virtual void setTime(int64_t time) override;
	virtual void setYear(int32_t i) override;
	virtual ::java::time::Instant* toInstant() override;
	virtual ::java::time::LocalTime* toLocalTime();
	virtual $String* toString() override;
	static ::java::sql::Time* valueOf($String* s);
	static ::java::sql::Time* valueOf(::java::time::LocalTime* time);
	static const int64_t serialVersionUID = (int64_t)0x74894A0DD932C471;
};

	} // sql
} // java

#endif // _java_sql_Time_h_