#include <java/sql/SQLNonTransientConnectionException.h>

#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

$FieldInfo _SQLNonTransientConnectionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLNonTransientConnectionException, serialVersionUID)},
	{}
};

$MethodInfo _SQLNonTransientConnectionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLNonTransientConnectionException::*)()>(&SQLNonTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLNonTransientConnectionException::*)($String*)>(&SQLNonTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLNonTransientConnectionException::*)($String*,$String*)>(&SQLNonTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLNonTransientConnectionException::*)($String*,$String*,int32_t)>(&SQLNonTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLNonTransientConnectionException::*)($Throwable*)>(&SQLNonTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLNonTransientConnectionException::*)($String*,$Throwable*)>(&SQLNonTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLNonTransientConnectionException::*)($String*,$String*,$Throwable*)>(&SQLNonTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLNonTransientConnectionException::*)($String*,$String*,int32_t,$Throwable*)>(&SQLNonTransientConnectionException::init$))},
	{}
};

$ClassInfo _SQLNonTransientConnectionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLNonTransientConnectionException",
	"java.sql.SQLNonTransientException",
	nullptr,
	_SQLNonTransientConnectionException_FieldInfo_,
	_SQLNonTransientConnectionException_MethodInfo_
};

$Object* allocate$SQLNonTransientConnectionException($Class* clazz) {
	return $of($alloc(SQLNonTransientConnectionException));
}

void SQLNonTransientConnectionException::init$() {
	$SQLNonTransientException::init$();
}

void SQLNonTransientConnectionException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLNonTransientConnectionException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLNonTransientConnectionException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLNonTransientConnectionException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLNonTransientConnectionException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLNonTransientConnectionException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLNonTransientConnectionException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLNonTransientConnectionException::SQLNonTransientConnectionException() {
}

SQLNonTransientConnectionException::SQLNonTransientConnectionException(const SQLNonTransientConnectionException& e) : $SQLNonTransientException(e) {
}

void SQLNonTransientConnectionException::throw$() {
	throw *this;
}

$Class* SQLNonTransientConnectionException::load$($String* name, bool initialize) {
	$loadClass(SQLNonTransientConnectionException, name, initialize, &_SQLNonTransientConnectionException_ClassInfo_, allocate$SQLNonTransientConnectionException);
	return class$;
}

$Class* SQLNonTransientConnectionException::class$ = nullptr;

	} // sql
} // java