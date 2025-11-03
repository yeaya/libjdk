#include <java/sql/SQLTransientConnectionException.h>

#include <java/sql/SQLTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLTransientException = ::java::sql::SQLTransientException;

namespace java {
	namespace sql {

$FieldInfo _SQLTransientConnectionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLTransientConnectionException, serialVersionUID)},
	{}
};

$MethodInfo _SQLTransientConnectionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransientConnectionException::*)()>(&SQLTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransientConnectionException::*)($String*)>(&SQLTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransientConnectionException::*)($String*,$String*)>(&SQLTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransientConnectionException::*)($String*,$String*,int32_t)>(&SQLTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransientConnectionException::*)($Throwable*)>(&SQLTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransientConnectionException::*)($String*,$Throwable*)>(&SQLTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransientConnectionException::*)($String*,$String*,$Throwable*)>(&SQLTransientConnectionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransientConnectionException::*)($String*,$String*,int32_t,$Throwable*)>(&SQLTransientConnectionException::init$))},
	{}
};

$ClassInfo _SQLTransientConnectionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLTransientConnectionException",
	"java.sql.SQLTransientException",
	nullptr,
	_SQLTransientConnectionException_FieldInfo_,
	_SQLTransientConnectionException_MethodInfo_
};

$Object* allocate$SQLTransientConnectionException($Class* clazz) {
	return $of($alloc(SQLTransientConnectionException));
}

void SQLTransientConnectionException::init$() {
	$SQLTransientException::init$();
}

void SQLTransientConnectionException::init$($String* reason) {
	$SQLTransientException::init$(reason);
}

void SQLTransientConnectionException::init$($String* reason, $String* SQLState) {
	$SQLTransientException::init$(reason, SQLState);
}

void SQLTransientConnectionException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLTransientException::init$(reason, SQLState, vendorCode);
}

void SQLTransientConnectionException::init$($Throwable* cause) {
	$SQLTransientException::init$(cause);
}

void SQLTransientConnectionException::init$($String* reason, $Throwable* cause) {
	$SQLTransientException::init$(reason, cause);
}

void SQLTransientConnectionException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLTransientException::init$(reason, SQLState, cause);
}

void SQLTransientConnectionException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLTransientConnectionException::SQLTransientConnectionException() {
}

SQLTransientConnectionException::SQLTransientConnectionException(const SQLTransientConnectionException& e) : $SQLTransientException(e) {
}

void SQLTransientConnectionException::throw$() {
	throw *this;
}

$Class* SQLTransientConnectionException::load$($String* name, bool initialize) {
	$loadClass(SQLTransientConnectionException, name, initialize, &_SQLTransientConnectionException_ClassInfo_, allocate$SQLTransientConnectionException);
	return class$;
}

$Class* SQLTransientConnectionException::class$ = nullptr;

	} // sql
} // java