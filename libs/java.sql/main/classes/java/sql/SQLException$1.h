#ifndef _java_sql_SQLException$1_h_
#define _java_sql_SQLException$1_h_
//$ class java.sql.SQLException$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace sql {
		class SQLException;
	}
}

namespace java {
	namespace sql {

class SQLException$1 : public ::java::util::Iterator {
	$class(SQLException$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	SQLException$1();
	void init$(::java::sql::SQLException* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::sql::SQLException* this$0 = nullptr;
	::java::sql::SQLException* firstException = nullptr;
	::java::sql::SQLException* nextException = nullptr;
	$Throwable* cause = nullptr;
};

	} // sql
} // java

#endif // _java_sql_SQLException$1_h_