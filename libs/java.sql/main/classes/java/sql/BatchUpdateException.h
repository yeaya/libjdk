#ifndef _java_sql_BatchUpdateException_h_
#define _java_sql_BatchUpdateException_h_
//$ class java.sql.BatchUpdateException
//$ extends java.sql.SQLException

#include <java/lang/Array.h>
#include <java/sql/SQLException.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $export BatchUpdateException : public ::java::sql::SQLException {
	$class(BatchUpdateException, $NO_CLASS_INIT, ::java::sql::SQLException)
public:
	BatchUpdateException();
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $ints* updateCounts);
	void init$($String* reason, $String* SQLState, $ints* updateCounts);
	void init$($String* reason, $ints* updateCounts);
	void init$($ints* updateCounts);
	void init$();
	void init$($Throwable* cause);
	void init$($ints* updateCounts, $Throwable* cause);
	void init$($String* reason, $ints* updateCounts, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $ints* updateCounts, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $ints* updateCounts, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $longs* updateCounts, $Throwable* cause);
	static $longs* copyUpdateCount($ints* uc);
	static $ints* copyUpdateCount($longs* uc);
	virtual $longs* getLargeUpdateCounts();
	virtual $ints* getUpdateCounts();
	void readObject(::java::io::ObjectInputStream* s);
	void writeObject(::java::io::ObjectOutputStream* s);
	$ints* updateCounts = nullptr;
	$longs* longUpdateCounts = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x52F473C0C18B0E5D;
	BatchUpdateException(const BatchUpdateException& e);
	virtual void throw$() override;
	inline BatchUpdateException* operator ->() {
		return (BatchUpdateException*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_BatchUpdateException_h_