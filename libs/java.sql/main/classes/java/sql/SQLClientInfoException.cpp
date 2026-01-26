#include <java/sql/SQLClientInfoException.h>

#include <java/sql/SQLException.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;
using $Map = ::java::util::Map;

namespace java {
	namespace sql {

$FieldInfo _SQLClientInfoException_FieldInfo_[] = {
	{"failedProperties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;", $PRIVATE, $field(SQLClientInfoException, failedProperties)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLClientInfoException, serialVersionUID)},
	{}
};

$MethodInfo _SQLClientInfoException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SQLClientInfoException, init$, void)},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;)V", $PUBLIC, $method(SQLClientInfoException, init$, void, $Map*)},
	{"<init>", "(Ljava/util/Map;Ljava/lang/Throwable;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;Ljava/lang/Throwable;)V", $PUBLIC, $method(SQLClientInfoException, init$, void, $Map*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;)V", $PUBLIC, $method(SQLClientInfoException, init$, void, $String*, $Map*)},
	{"<init>", "(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;Ljava/lang/Throwable;)V", $PUBLIC, $method(SQLClientInfoException, init$, void, $String*, $Map*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;)V", $PUBLIC, $method(SQLClientInfoException, init$, void, $String*, $String*, $Map*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;Ljava/lang/Throwable;)V", $PUBLIC, $method(SQLClientInfoException, init$, void, $String*, $String*, $Map*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V", "(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;)V", $PUBLIC, $method(SQLClientInfoException, init$, void, $String*, $String*, int32_t, $Map*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;Ljava/lang/Throwable;)V", "(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;Ljava/lang/Throwable;)V", $PUBLIC, $method(SQLClientInfoException, init$, void, $String*, $String*, int32_t, $Map*, $Throwable*)},
	{"getFailedProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/sql/ClientInfoStatus;>;", $PUBLIC, $virtualMethod(SQLClientInfoException, getFailedProperties, $Map*)},
	{}
};

$ClassInfo _SQLClientInfoException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLClientInfoException",
	"java.sql.SQLException",
	nullptr,
	_SQLClientInfoException_FieldInfo_,
	_SQLClientInfoException_MethodInfo_
};

$Object* allocate$SQLClientInfoException($Class* clazz) {
	return $of($alloc(SQLClientInfoException));
}

void SQLClientInfoException::init$() {
	$SQLException::init$();
	$set(this, failedProperties, nullptr);
}

void SQLClientInfoException::init$($Map* failedProperties) {
	$SQLException::init$();
	$set(this, failedProperties, failedProperties);
}

void SQLClientInfoException::init$($Map* failedProperties, $Throwable* cause) {
	$SQLException::init$(cause != nullptr ? $($nc(cause)->toString()) : ($String*)nullptr);
	initCause(cause);
	$set(this, failedProperties, failedProperties);
}

void SQLClientInfoException::init$($String* reason, $Map* failedProperties) {
	$SQLException::init$(reason);
	$set(this, failedProperties, failedProperties);
}

void SQLClientInfoException::init$($String* reason, $Map* failedProperties, $Throwable* cause) {
	$SQLException::init$(reason);
	initCause(cause);
	$set(this, failedProperties, failedProperties);
}

void SQLClientInfoException::init$($String* reason, $String* SQLState, $Map* failedProperties) {
	$SQLException::init$(reason, SQLState);
	$set(this, failedProperties, failedProperties);
}

void SQLClientInfoException::init$($String* reason, $String* SQLState, $Map* failedProperties, $Throwable* cause) {
	$SQLException::init$(reason, SQLState);
	initCause(cause);
	$set(this, failedProperties, failedProperties);
}

void SQLClientInfoException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Map* failedProperties) {
	$SQLException::init$(reason, SQLState, vendorCode);
	$set(this, failedProperties, failedProperties);
}

void SQLClientInfoException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Map* failedProperties, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, vendorCode);
	initCause(cause);
	$set(this, failedProperties, failedProperties);
}

$Map* SQLClientInfoException::getFailedProperties() {
	return this->failedProperties;
}

SQLClientInfoException::SQLClientInfoException() {
}

SQLClientInfoException::SQLClientInfoException(const SQLClientInfoException& e) : $SQLException(e) {
}

void SQLClientInfoException::throw$() {
	throw *this;
}

$Class* SQLClientInfoException::load$($String* name, bool initialize) {
	$loadClass(SQLClientInfoException, name, initialize, &_SQLClientInfoException_ClassInfo_, allocate$SQLClientInfoException);
	return class$;
}

$Class* SQLClientInfoException::class$ = nullptr;

	} // sql
} // java