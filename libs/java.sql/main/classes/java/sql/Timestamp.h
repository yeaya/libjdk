#ifndef _java_sql_Timestamp_h_
#define _java_sql_Timestamp_h_
//$ class java.sql.Timestamp
//$ extends java.util.Date

#include <java/util/Date.h>

#pragma push_macro("MILLIS_PER_SECOND")
#undef MILLIS_PER_SECOND

namespace java {
	namespace time {
		class Instant;
		class LocalDateTime;
	}
}

namespace java {
	namespace sql {

class $export Timestamp : public ::java::util::Date {
	$class(Timestamp, $NO_CLASS_INIT, ::java::util::Date)
public:
	Timestamp();
	using ::java::util::Date::before;
	using ::java::util::Date::after;
	void init$(int32_t year, int32_t month, int32_t date, int32_t hour, int32_t minute, int32_t second, int32_t nano);
	void init$(int64_t time);
	virtual bool after(::java::sql::Timestamp* ts);
	virtual bool before(::java::sql::Timestamp* ts);
	virtual int32_t compareTo(::java::sql::Timestamp* ts);
	virtual int32_t compareTo(::java::util::Date* o) override;
	virtual int32_t compareTo(Object$* o) override;
	virtual bool equals(::java::sql::Timestamp* ts);
	virtual bool equals(Object$* ts) override;
	static ::java::sql::Timestamp* from(::java::time::Instant* instant);
	virtual int32_t getNanos();
	virtual int64_t getTime() override;
	virtual int32_t hashCode() override;
	virtual void setNanos(int32_t n);
	virtual void setTime(int64_t time) override;
	virtual ::java::time::Instant* toInstant() override;
	virtual ::java::time::LocalDateTime* toLocalDateTime();
	virtual $String* toString() override;
	static ::java::sql::Timestamp* valueOf($String* s);
	static ::java::sql::Timestamp* valueOf(::java::time::LocalDateTime* dateTime);
	int32_t nanos = 0;
	static const int64_t serialVersionUID = (int64_t)0x2618D5C80153BF65;
	static const int32_t MILLIS_PER_SECOND = 1000;
};

	} // sql
} // java

#pragma pop_macro("MILLIS_PER_SECOND")

#endif // _java_sql_Timestamp_h_