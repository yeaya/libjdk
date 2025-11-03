#include <java/sql/SQLInvalidAuthorizationSpecException.h>

#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

$FieldInfo _SQLInvalidAuthorizationSpecException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLInvalidAuthorizationSpecException, serialVersionUID)},
	{}
};

$MethodInfo _SQLInvalidAuthorizationSpecException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLInvalidAuthorizationSpecException::*)()>(&SQLInvalidAuthorizationSpecException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLInvalidAuthorizationSpecException::*)($String*)>(&SQLInvalidAuthorizationSpecException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLInvalidAuthorizationSpecException::*)($String*,$String*)>(&SQLInvalidAuthorizationSpecException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLInvalidAuthorizationSpecException::*)($String*,$String*,int32_t)>(&SQLInvalidAuthorizationSpecException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLInvalidAuthorizationSpecException::*)($Throwable*)>(&SQLInvalidAuthorizationSpecException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLInvalidAuthorizationSpecException::*)($String*,$Throwable*)>(&SQLInvalidAuthorizationSpecException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLInvalidAuthorizationSpecException::*)($String*,$String*,$Throwable*)>(&SQLInvalidAuthorizationSpecException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLInvalidAuthorizationSpecException::*)($String*,$String*,int32_t,$Throwable*)>(&SQLInvalidAuthorizationSpecException::init$))},
	{}
};

$ClassInfo _SQLInvalidAuthorizationSpecException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLInvalidAuthorizationSpecException",
	"java.sql.SQLNonTransientException",
	nullptr,
	_SQLInvalidAuthorizationSpecException_FieldInfo_,
	_SQLInvalidAuthorizationSpecException_MethodInfo_
};

$Object* allocate$SQLInvalidAuthorizationSpecException($Class* clazz) {
	return $of($alloc(SQLInvalidAuthorizationSpecException));
}

void SQLInvalidAuthorizationSpecException::init$() {
	$SQLNonTransientException::init$();
}

void SQLInvalidAuthorizationSpecException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLInvalidAuthorizationSpecException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLInvalidAuthorizationSpecException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException() {
}

SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(const SQLInvalidAuthorizationSpecException& e) : $SQLNonTransientException(e) {
}

void SQLInvalidAuthorizationSpecException::throw$() {
	throw *this;
}

$Class* SQLInvalidAuthorizationSpecException::load$($String* name, bool initialize) {
	$loadClass(SQLInvalidAuthorizationSpecException, name, initialize, &_SQLInvalidAuthorizationSpecException_ClassInfo_, allocate$SQLInvalidAuthorizationSpecException);
	return class$;
}

$Class* SQLInvalidAuthorizationSpecException::class$ = nullptr;

	} // sql
} // java