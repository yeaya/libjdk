#include <java/sql/SQLException$1.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/sql/SQLException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SQLException = ::java::sql::SQLException;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace sql {

void SQLException$1::init$($SQLException* this$0) {
	$set(this, this$0, this$0);
	$set(this, firstException, this->this$0);
	$set(this, nextException, $nc(this->firstException)->getNextException());
	$set(this, cause, $nc(this->firstException)->getCause());
}

bool SQLException$1::hasNext() {
	if (this->firstException != nullptr || this->nextException != nullptr || this->cause != nullptr) {
		return true;
	}
	return false;
}

$Object* SQLException$1::next() {
	$var($Throwable, throwable, nullptr);
	if (this->firstException != nullptr) {
		$assign(throwable, this->firstException);
		$set(this, firstException, nullptr);
	} else if (this->cause != nullptr) {
		$assign(throwable, this->cause);
		$set(this, cause, this->cause->getCause());
	} else if (this->nextException != nullptr) {
		$assign(throwable, this->nextException);
		$set(this, cause, this->nextException->getCause());
		$set(this, nextException, this->nextException->getNextException());
	} else {
		$throwNew($NoSuchElementException);
	}
	return throwable;
}

void SQLException$1::remove() {
	$throwNew($UnsupportedOperationException);
}

SQLException$1::SQLException$1() {
}

$Class* SQLException$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/sql/SQLException;", nullptr, $FINAL | $SYNTHETIC, $field(SQLException$1, this$0)},
		{"firstException", "Ljava/sql/SQLException;", nullptr, 0, $field(SQLException$1, firstException)},
		{"nextException", "Ljava/sql/SQLException;", nullptr, 0, $field(SQLException$1, nextException)},
		{"cause", "Ljava/lang/Throwable;", nullptr, 0, $field(SQLException$1, cause)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/sql/SQLException;)V", nullptr, 0, $method(SQLException$1, init$, void, $SQLException*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(SQLException$1, hasNext, bool)},
		{"next", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(SQLException$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(SQLException$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.sql.SQLException",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.sql.SQLException$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.sql.SQLException$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/Throwable;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.sql.SQLException"
	};
	$loadClass(SQLException$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SQLException$1);
	});
	return class$;
}

$Class* SQLException$1::class$ = nullptr;

	} // sql
} // java