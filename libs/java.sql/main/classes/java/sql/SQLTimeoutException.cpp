#include <java/sql/SQLTimeoutException.h>

#include <java/sql/SQLTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLTransientException = ::java::sql::SQLTransientException;

namespace java {
	namespace sql {

$FieldInfo _SQLTimeoutException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLTimeoutException, serialVersionUID)},
	{}
};

$MethodInfo _SQLTimeoutException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SQLTimeoutException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLTimeoutException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLTimeoutException, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLTimeoutException, init$, void, $String*, $String*, int32_t)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTimeoutException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTimeoutException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTimeoutException, init$, void, $String*, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTimeoutException, init$, void, $String*, $String*, int32_t, $Throwable*)},
	{}
};

$ClassInfo _SQLTimeoutException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLTimeoutException",
	"java.sql.SQLTransientException",
	nullptr,
	_SQLTimeoutException_FieldInfo_,
	_SQLTimeoutException_MethodInfo_
};

$Object* allocate$SQLTimeoutException($Class* clazz) {
	return $of($alloc(SQLTimeoutException));
}

void SQLTimeoutException::init$() {
	$SQLTransientException::init$();
}

void SQLTimeoutException::init$($String* reason) {
	$SQLTransientException::init$(reason);
}

void SQLTimeoutException::init$($String* reason, $String* SQLState) {
	$SQLTransientException::init$(reason, SQLState);
}

void SQLTimeoutException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLTransientException::init$(reason, SQLState, vendorCode);
}

void SQLTimeoutException::init$($Throwable* cause) {
	$SQLTransientException::init$(cause);
}

void SQLTimeoutException::init$($String* reason, $Throwable* cause) {
	$SQLTransientException::init$(reason, cause);
}

void SQLTimeoutException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLTransientException::init$(reason, SQLState, cause);
}

void SQLTimeoutException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLTimeoutException::SQLTimeoutException() {
}

SQLTimeoutException::SQLTimeoutException(const SQLTimeoutException& e) : $SQLTransientException(e) {
}

void SQLTimeoutException::throw$() {
	throw *this;
}

$Class* SQLTimeoutException::load$($String* name, bool initialize) {
	$loadClass(SQLTimeoutException, name, initialize, &_SQLTimeoutException_ClassInfo_, allocate$SQLTimeoutException);
	return class$;
}

$Class* SQLTimeoutException::class$ = nullptr;

	} // sql
} // java