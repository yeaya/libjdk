#ifndef _java_sql_SQLException_h_
#define _java_sql_SQLException_h_
//$ class java.sql.SQLException
//$ extends java.lang.Exception
//$ implements java.lang.Iterable

#include <java/lang/Exception.h>
#include <java/lang/Iterable.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReferenceFieldUpdater;
			}
		}
	}
}

namespace java {
	namespace sql {

class $import SQLException : public ::java::lang::Exception, public ::java::lang::Iterable {
	$class(SQLException, 0, ::java::lang::Exception, ::java::lang::Iterable)
public:
	SQLException();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason);
	void init$();
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* sqlState, $Throwable* cause);
	void init$($String* reason, $String* sqlState, int32_t vendorCode, $Throwable* cause);
	virtual int32_t getErrorCode();
	virtual ::java::sql::SQLException* getNextException();
	virtual $String* getSQLState();
	virtual ::java::util::Iterator* iterator() override;
	virtual void setNextException(::java::sql::SQLException* ex);
	virtual $String* toString() override;
	$String* SQLState = nullptr;
	int32_t vendorCode = 0;
	$volatile(::java::sql::SQLException*) next = nullptr;
	static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater* nextUpdater;
	static const int64_t serialVersionUID = (int64_t)0x1DA1E930DB3E75DC;
	SQLException(const SQLException& e);
	virtual void throw$() override;
	inline SQLException* operator ->() {
		return (SQLException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_SQLException_h_