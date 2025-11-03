#include <java/sql/SQLTransactionRollbackException.h>

#include <java/sql/SQLTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLTransientException = ::java::sql::SQLTransientException;

namespace java {
	namespace sql {

$FieldInfo _SQLTransactionRollbackException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLTransactionRollbackException, serialVersionUID)},
	{}
};

$MethodInfo _SQLTransactionRollbackException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransactionRollbackException::*)()>(&SQLTransactionRollbackException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransactionRollbackException::*)($String*)>(&SQLTransactionRollbackException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransactionRollbackException::*)($String*,$String*)>(&SQLTransactionRollbackException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransactionRollbackException::*)($String*,$String*,int32_t)>(&SQLTransactionRollbackException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransactionRollbackException::*)($Throwable*)>(&SQLTransactionRollbackException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransactionRollbackException::*)($String*,$Throwable*)>(&SQLTransactionRollbackException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransactionRollbackException::*)($String*,$String*,$Throwable*)>(&SQLTransactionRollbackException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLTransactionRollbackException::*)($String*,$String*,int32_t,$Throwable*)>(&SQLTransactionRollbackException::init$))},
	{}
};

$ClassInfo _SQLTransactionRollbackException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLTransactionRollbackException",
	"java.sql.SQLTransientException",
	nullptr,
	_SQLTransactionRollbackException_FieldInfo_,
	_SQLTransactionRollbackException_MethodInfo_
};

$Object* allocate$SQLTransactionRollbackException($Class* clazz) {
	return $of($alloc(SQLTransactionRollbackException));
}

void SQLTransactionRollbackException::init$() {
	$SQLTransientException::init$();
}

void SQLTransactionRollbackException::init$($String* reason) {
	$SQLTransientException::init$(reason);
}

void SQLTransactionRollbackException::init$($String* reason, $String* SQLState) {
	$SQLTransientException::init$(reason, SQLState);
}

void SQLTransactionRollbackException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLTransientException::init$(reason, SQLState, vendorCode);
}

void SQLTransactionRollbackException::init$($Throwable* cause) {
	$SQLTransientException::init$(cause);
}

void SQLTransactionRollbackException::init$($String* reason, $Throwable* cause) {
	$SQLTransientException::init$(reason, cause);
}

void SQLTransactionRollbackException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLTransientException::init$(reason, SQLState, cause);
}

void SQLTransactionRollbackException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLTransactionRollbackException::SQLTransactionRollbackException() {
}

SQLTransactionRollbackException::SQLTransactionRollbackException(const SQLTransactionRollbackException& e) : $SQLTransientException(e) {
}

void SQLTransactionRollbackException::throw$() {
	throw *this;
}

$Class* SQLTransactionRollbackException::load$($String* name, bool initialize) {
	$loadClass(SQLTransactionRollbackException, name, initialize, &_SQLTransactionRollbackException_ClassInfo_, allocate$SQLTransactionRollbackException);
	return class$;
}

$Class* SQLTransactionRollbackException::class$ = nullptr;

	} // sql
} // java