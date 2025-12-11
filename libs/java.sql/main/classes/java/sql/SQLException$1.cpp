#include <java/sql/SQLException$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/sql/SQLException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SQLException = ::java::sql::SQLException;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace sql {

$FieldInfo _SQLException$1_FieldInfo_[] = {
	{"this$0", "Ljava/sql/SQLException;", nullptr, $FINAL | $SYNTHETIC, $field(SQLException$1, this$0)},
	{"firstException", "Ljava/sql/SQLException;", nullptr, 0, $field(SQLException$1, firstException)},
	{"nextException", "Ljava/sql/SQLException;", nullptr, 0, $field(SQLException$1, nextException)},
	{"cause", "Ljava/lang/Throwable;", nullptr, 0, $field(SQLException$1, cause)},
	{}
};

$MethodInfo _SQLException$1_MethodInfo_[] = {
	{"<init>", "(Ljava/sql/SQLException;)V", nullptr, 0, $method(static_cast<void(SQLException$1::*)($SQLException*)>(&SQLException$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SQLException$1_EnclosingMethodInfo_ = {
	"java.sql.SQLException",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _SQLException$1_InnerClassesInfo_[] = {
	{"java.sql.SQLException$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SQLException$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.sql.SQLException$1",
	"java.lang.Object",
	"java.util.Iterator",
	_SQLException$1_FieldInfo_,
	_SQLException$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/Throwable;>;",
	&_SQLException$1_EnclosingMethodInfo_,
	_SQLException$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.sql.SQLException"
};

$Object* allocate$SQLException$1($Class* clazz) {
	return $of($alloc(SQLException$1));
}

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
		$set(this, cause, $nc(this->cause)->getCause());
	} else if (this->nextException != nullptr) {
		$assign(throwable, this->nextException);
		$set(this, cause, $nc(this->nextException)->getCause());
		$set(this, nextException, $nc(this->nextException)->getNextException());
	} else {
		$throwNew($NoSuchElementException);
	}
	return $of(throwable);
}

void SQLException$1::remove() {
	$throwNew($UnsupportedOperationException);
}

SQLException$1::SQLException$1() {
}

$Class* SQLException$1::load$($String* name, bool initialize) {
	$loadClass(SQLException$1, name, initialize, &_SQLException$1_ClassInfo_, allocate$SQLException$1);
	return class$;
}

$Class* SQLException$1::class$ = nullptr;

	} // sql
} // java