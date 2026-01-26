#include <java/sql/SQLSyntaxErrorException.h>

#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

$FieldInfo _SQLSyntaxErrorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLSyntaxErrorException, serialVersionUID)},
	{}
};

$MethodInfo _SQLSyntaxErrorException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SQLSyntaxErrorException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLSyntaxErrorException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLSyntaxErrorException, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLSyntaxErrorException, init$, void, $String*, $String*, int32_t)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLSyntaxErrorException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLSyntaxErrorException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLSyntaxErrorException, init$, void, $String*, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLSyntaxErrorException, init$, void, $String*, $String*, int32_t, $Throwable*)},
	{}
};

$ClassInfo _SQLSyntaxErrorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLSyntaxErrorException",
	"java.sql.SQLNonTransientException",
	nullptr,
	_SQLSyntaxErrorException_FieldInfo_,
	_SQLSyntaxErrorException_MethodInfo_
};

$Object* allocate$SQLSyntaxErrorException($Class* clazz) {
	return $of($alloc(SQLSyntaxErrorException));
}

void SQLSyntaxErrorException::init$() {
	$SQLNonTransientException::init$();
}

void SQLSyntaxErrorException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLSyntaxErrorException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLSyntaxErrorException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLSyntaxErrorException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLSyntaxErrorException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLSyntaxErrorException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLSyntaxErrorException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLSyntaxErrorException::SQLSyntaxErrorException() {
}

SQLSyntaxErrorException::SQLSyntaxErrorException(const SQLSyntaxErrorException& e) : $SQLNonTransientException(e) {
}

void SQLSyntaxErrorException::throw$() {
	throw *this;
}

$Class* SQLSyntaxErrorException::load$($String* name, bool initialize) {
	$loadClass(SQLSyntaxErrorException, name, initialize, &_SQLSyntaxErrorException_ClassInfo_, allocate$SQLSyntaxErrorException);
	return class$;
}

$Class* SQLSyntaxErrorException::class$ = nullptr;

	} // sql
} // java