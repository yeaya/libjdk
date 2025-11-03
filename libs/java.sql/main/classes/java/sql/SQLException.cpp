#include <java/sql/SQLException.h>

#include <java/io/PrintWriter.h>
#include <java/sql/DriverManager.h>
#include <java/sql/SQLException$1.h>
#include <java/sql/SQLWarning.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $DriverManager = ::java::sql::DriverManager;
using $SQLException$1 = ::java::sql::SQLException$1;
using $SQLWarning = ::java::sql::SQLWarning;
using $Iterator = ::java::util::Iterator;
using $AtomicReferenceFieldUpdater = ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater;

namespace java {
	namespace sql {

$FieldInfo _SQLException_FieldInfo_[] = {
	{"SQLState", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SQLException, SQLState)},
	{"vendorCode", "I", nullptr, $PRIVATE, $field(SQLException, vendorCode)},
	{"next", "Ljava/sql/SQLException;", nullptr, $PRIVATE | $VOLATILE, $field(SQLException, next)},
	{"nextUpdater", "Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;", "Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater<Ljava/sql/SQLException;Ljava/sql/SQLException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SQLException, nextUpdater)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLException, serialVersionUID)},
	{}
};

$MethodInfo _SQLException_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLException::*)($String*,$String*,int32_t)>(&SQLException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLException::*)($String*,$String*)>(&SQLException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLException::*)($String*)>(&SQLException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLException::*)()>(&SQLException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLException::*)($Throwable*)>(&SQLException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLException::*)($String*,$Throwable*)>(&SQLException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLException::*)($String*,$String*,$Throwable*)>(&SQLException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLException::*)($String*,$String*,int32_t,$Throwable*)>(&SQLException::init$))},
	{"getErrorCode", "()I", nullptr, $PUBLIC},
	{"getNextException", "()Ljava/sql/SQLException;", nullptr, $PUBLIC},
	{"getSQLState", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/Throwable;>;", $PUBLIC},
	{"setNextException", "(Ljava/sql/SQLException;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SQLException_InnerClassesInfo_[] = {
	{"java.sql.SQLException$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SQLException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLException",
	"java.lang.Exception",
	"java.lang.Iterable",
	_SQLException_FieldInfo_,
	_SQLException_MethodInfo_,
	"Ljava/lang/Exception;Ljava/lang/Iterable<Ljava/lang/Throwable;>;",
	nullptr,
	_SQLException_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.sql.SQLException$1"
};

$Object* allocate$SQLException($Class* clazz) {
	return $of($alloc(SQLException));
}

$String* SQLException::toString() {
	 return this->$Exception::toString();
}

int32_t SQLException::hashCode() {
	 return this->$Exception::hashCode();
}

bool SQLException::equals(Object$* arg0) {
	 return this->$Exception::equals(arg0);
}

$Object* SQLException::clone() {
	 return this->$Exception::clone();
}

void SQLException::finalize() {
	this->$Exception::finalize();
}

$AtomicReferenceFieldUpdater* SQLException::nextUpdater = nullptr;

void SQLException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$useLocalCurrentObjectStackCache();
	$Exception::init$(reason);
	$set(this, SQLState, SQLState);
	this->vendorCode = vendorCode;
	if (!($instanceOf($SQLWarning, this))) {
		if ($DriverManager::getLogWriter() != nullptr) {
			$DriverManager::println($$str({"SQLState("_s, SQLState, ") vendor code("_s, $$str(vendorCode), ")"_s}));
			printStackTrace($($DriverManager::getLogWriter()));
		}
	}
}

void SQLException::init$($String* reason, $String* SQLState) {
	$useLocalCurrentObjectStackCache();
	$Exception::init$(reason);
	$set(this, SQLState, SQLState);
	this->vendorCode = 0;
	if (!($instanceOf($SQLWarning, this))) {
		if ($DriverManager::getLogWriter() != nullptr) {
			printStackTrace($($DriverManager::getLogWriter()));
			$DriverManager::println($$str({"SQLException: SQLState("_s, SQLState, ")"_s}));
		}
	}
}

void SQLException::init$($String* reason) {
	$Exception::init$(reason);
	$set(this, SQLState, nullptr);
	this->vendorCode = 0;
	if (!($instanceOf($SQLWarning, this))) {
		if ($DriverManager::getLogWriter() != nullptr) {
			printStackTrace($($DriverManager::getLogWriter()));
		}
	}
}

void SQLException::init$() {
	$Exception::init$();
	$set(this, SQLState, nullptr);
	this->vendorCode = 0;
	if (!($instanceOf($SQLWarning, this))) {
		if ($DriverManager::getLogWriter() != nullptr) {
			printStackTrace($($DriverManager::getLogWriter()));
		}
	}
}

void SQLException::init$($Throwable* cause) {
	$Exception::init$(cause);
	if (!($instanceOf($SQLWarning, this))) {
		if ($DriverManager::getLogWriter() != nullptr) {
			printStackTrace($($DriverManager::getLogWriter()));
		}
	}
}

void SQLException::init$($String* reason, $Throwable* cause) {
	$Exception::init$(reason, cause);
	if (!($instanceOf($SQLWarning, this))) {
		if ($DriverManager::getLogWriter() != nullptr) {
			printStackTrace($($DriverManager::getLogWriter()));
		}
	}
}

void SQLException::init$($String* reason, $String* sqlState, $Throwable* cause) {
	$useLocalCurrentObjectStackCache();
	$Exception::init$(reason, cause);
	$set(this, SQLState, sqlState);
	this->vendorCode = 0;
	if (!($instanceOf($SQLWarning, this))) {
		if ($DriverManager::getLogWriter() != nullptr) {
			printStackTrace($($DriverManager::getLogWriter()));
			$DriverManager::println($$str({"SQLState("_s, this->SQLState, ")"_s}));
		}
	}
}

void SQLException::init$($String* reason, $String* sqlState, int32_t vendorCode, $Throwable* cause) {
	$useLocalCurrentObjectStackCache();
	$Exception::init$(reason, cause);
	$set(this, SQLState, sqlState);
	this->vendorCode = vendorCode;
	if (!($instanceOf($SQLWarning, this))) {
		if ($DriverManager::getLogWriter() != nullptr) {
			$DriverManager::println($$str({"SQLState("_s, this->SQLState, ") vendor code("_s, $$str(vendorCode), ")"_s}));
			printStackTrace($($DriverManager::getLogWriter()));
		}
	}
}

$String* SQLException::getSQLState() {
	return (this->SQLState);
}

int32_t SQLException::getErrorCode() {
	return (this->vendorCode);
}

SQLException* SQLException::getNextException() {
	return (this->next);
}

void SQLException::setNextException(SQLException* ex) {
	$useLocalCurrentObjectStackCache();
	$var(SQLException, current, this);
	for (;;) {
		$var(SQLException, next, current->next);
		if (next != nullptr) {
			$assign(current, next);
			continue;
		}
		if ($nc(SQLException::nextUpdater)->compareAndSet(current, nullptr, ex)) {
			return;
		}
		$assign(current, current->next);
	}
}

$Iterator* SQLException::iterator() {
	return $new($SQLException$1, this);
}

void clinit$SQLException($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(SQLException::nextUpdater, $AtomicReferenceFieldUpdater::newUpdater(SQLException::class$, SQLException::class$, "next"_s));
}

SQLException::SQLException() {
}

SQLException::SQLException(const SQLException& e) : $Exception(e) {
}

void SQLException::throw$() {
	throw *this;
}

$Class* SQLException::load$($String* name, bool initialize) {
	$loadClass(SQLException, name, initialize, &_SQLException_ClassInfo_, clinit$SQLException, allocate$SQLException);
	return class$;
}

$Class* SQLException::class$ = nullptr;

	} // sql
} // java