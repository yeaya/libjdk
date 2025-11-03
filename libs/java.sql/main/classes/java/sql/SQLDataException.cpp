#include <java/sql/SQLDataException.h>

#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

$FieldInfo _SQLDataException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLDataException, serialVersionUID)},
	{}
};

$MethodInfo _SQLDataException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLDataException::*)()>(&SQLDataException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLDataException::*)($String*)>(&SQLDataException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLDataException::*)($String*,$String*)>(&SQLDataException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLDataException::*)($String*,$String*,int32_t)>(&SQLDataException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLDataException::*)($Throwable*)>(&SQLDataException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLDataException::*)($String*,$Throwable*)>(&SQLDataException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLDataException::*)($String*,$String*,$Throwable*)>(&SQLDataException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLDataException::*)($String*,$String*,int32_t,$Throwable*)>(&SQLDataException::init$))},
	{}
};

$ClassInfo _SQLDataException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLDataException",
	"java.sql.SQLNonTransientException",
	nullptr,
	_SQLDataException_FieldInfo_,
	_SQLDataException_MethodInfo_
};

$Object* allocate$SQLDataException($Class* clazz) {
	return $of($alloc(SQLDataException));
}

void SQLDataException::init$() {
	$SQLNonTransientException::init$();
}

void SQLDataException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLDataException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLDataException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLDataException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLDataException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLDataException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLDataException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLDataException::SQLDataException() {
}

SQLDataException::SQLDataException(const SQLDataException& e) : $SQLNonTransientException(e) {
}

void SQLDataException::throw$() {
	throw *this;
}

$Class* SQLDataException::load$($String* name, bool initialize) {
	$loadClass(SQLDataException, name, initialize, &_SQLDataException_ClassInfo_, allocate$SQLDataException);
	return class$;
}

$Class* SQLDataException::class$ = nullptr;

	} // sql
} // java