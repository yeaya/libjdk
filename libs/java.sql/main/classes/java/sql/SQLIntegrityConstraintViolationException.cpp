#include <java/sql/SQLIntegrityConstraintViolationException.h>

#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

$FieldInfo _SQLIntegrityConstraintViolationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLIntegrityConstraintViolationException, serialVersionUID)},
	{}
};

$MethodInfo _SQLIntegrityConstraintViolationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLIntegrityConstraintViolationException::*)()>(&SQLIntegrityConstraintViolationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLIntegrityConstraintViolationException::*)($String*)>(&SQLIntegrityConstraintViolationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLIntegrityConstraintViolationException::*)($String*,$String*)>(&SQLIntegrityConstraintViolationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLIntegrityConstraintViolationException::*)($String*,$String*,int32_t)>(&SQLIntegrityConstraintViolationException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLIntegrityConstraintViolationException::*)($Throwable*)>(&SQLIntegrityConstraintViolationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLIntegrityConstraintViolationException::*)($String*,$Throwable*)>(&SQLIntegrityConstraintViolationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLIntegrityConstraintViolationException::*)($String*,$String*,$Throwable*)>(&SQLIntegrityConstraintViolationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLIntegrityConstraintViolationException::*)($String*,$String*,int32_t,$Throwable*)>(&SQLIntegrityConstraintViolationException::init$))},
	{}
};

$ClassInfo _SQLIntegrityConstraintViolationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLIntegrityConstraintViolationException",
	"java.sql.SQLNonTransientException",
	nullptr,
	_SQLIntegrityConstraintViolationException_FieldInfo_,
	_SQLIntegrityConstraintViolationException_MethodInfo_
};

$Object* allocate$SQLIntegrityConstraintViolationException($Class* clazz) {
	return $of($alloc(SQLIntegrityConstraintViolationException));
}

void SQLIntegrityConstraintViolationException::init$() {
	$SQLNonTransientException::init$();
}

void SQLIntegrityConstraintViolationException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLIntegrityConstraintViolationException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLIntegrityConstraintViolationException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException() {
}

SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const SQLIntegrityConstraintViolationException& e) : $SQLNonTransientException(e) {
}

void SQLIntegrityConstraintViolationException::throw$() {
	throw *this;
}

$Class* SQLIntegrityConstraintViolationException::load$($String* name, bool initialize) {
	$loadClass(SQLIntegrityConstraintViolationException, name, initialize, &_SQLIntegrityConstraintViolationException_ClassInfo_, allocate$SQLIntegrityConstraintViolationException);
	return class$;
}

$Class* SQLIntegrityConstraintViolationException::class$ = nullptr;

	} // sql
} // java