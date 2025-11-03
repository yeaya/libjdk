#ifndef _java_sql_Date_h_
#define _java_sql_Date_h_
//$ class java.sql.Date
//$ extends java.util.Date

#include <java/lang/Array.h>
#include <java/util/Date.h>

namespace java {
	namespace time {
		class Instant;
		class LocalDate;
	}
}

namespace java {
	namespace sql {

class $import Date : public ::java::util::Date {
	$class(Date, $NO_CLASS_INIT, ::java::util::Date)
public:
	Date();
	void init$(int32_t year, int32_t month, int32_t day);
	void init$(int64_t date);
	static void formatDecimalInt(int32_t val, $chars* buf, int32_t offset, int32_t len);
	virtual int32_t getHours() override;
	virtual int32_t getMinutes() override;
	virtual int32_t getSeconds() override;
	virtual void setHours(int32_t i) override;
	virtual void setMinutes(int32_t i) override;
	virtual void setSeconds(int32_t i) override;
	virtual void setTime(int64_t date) override;
	virtual ::java::time::Instant* toInstant() override;
	virtual ::java::time::LocalDate* toLocalDate();
	virtual $String* toString() override;
	static ::java::sql::Date* valueOf($String* s);
	static ::java::sql::Date* valueOf(::java::time::LocalDate* date);
	static const int64_t serialVersionUID = (int64_t)0x14FA46683F356697;
};

	} // sql
} // java

#endif // _java_sql_Date_h_