#include <java/sql/BatchUpdateException.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/sql/SQLException.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace sql {

$FieldInfo _BatchUpdateException_FieldInfo_[] = {
	{"updateCounts", "[I", nullptr, $PRIVATE, $field(BatchUpdateException, updateCounts)},
	{"longUpdateCounts", "[J", nullptr, $PRIVATE, $field(BatchUpdateException, longUpdateCounts)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BatchUpdateException, serialVersionUID)},
	{}
};

$MethodInfo _BatchUpdateException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I[I)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $String*, $String*, int32_t, $ints*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[I)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $String*, $String*, $ints*)},
	{"<init>", "(Ljava/lang/String;[I)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $String*, $ints*)},
	{"<init>", "([I)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $ints*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $Throwable*)},
	{"<init>", "([ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $ints*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;[ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $String*, $ints*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $String*, $String*, $ints*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I[ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $String*, $String*, int32_t, $ints*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I[JLjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BatchUpdateException, init$, void, $String*, $String*, int32_t, $longs*, $Throwable*)},
	{"copyUpdateCount", "([I)[J", nullptr, $PRIVATE | $STATIC, $staticMethod(BatchUpdateException, copyUpdateCount, $longs*, $ints*)},
	{"copyUpdateCount", "([J)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(BatchUpdateException, copyUpdateCount, $ints*, $longs*)},
	{"getLargeUpdateCounts", "()[J", nullptr, $PUBLIC, $virtualMethod(BatchUpdateException, getLargeUpdateCounts, $longs*)},
	{"getUpdateCounts", "()[I", nullptr, $PUBLIC, $virtualMethod(BatchUpdateException, getUpdateCounts, $ints*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(BatchUpdateException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(BatchUpdateException, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _BatchUpdateException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.BatchUpdateException",
	"java.sql.SQLException",
	nullptr,
	_BatchUpdateException_FieldInfo_,
	_BatchUpdateException_MethodInfo_
};

$Object* allocate$BatchUpdateException($Class* clazz) {
	return $of($alloc(BatchUpdateException));
}

void BatchUpdateException::init$($String* reason, $String* SQLState, int32_t vendorCode, $ints* updateCounts) {
	$SQLException::init$(reason, SQLState, vendorCode);
	$set(this, updateCounts, (updateCounts == nullptr) ? ($ints*)nullptr : $Arrays::copyOf(updateCounts, $nc(updateCounts)->length));
	$set(this, longUpdateCounts, (updateCounts == nullptr) ? ($longs*)nullptr : copyUpdateCount(updateCounts));
}

void BatchUpdateException::init$($String* reason, $String* SQLState, $ints* updateCounts) {
	BatchUpdateException::init$(reason, SQLState, 0, updateCounts);
}

void BatchUpdateException::init$($String* reason, $ints* updateCounts) {
	BatchUpdateException::init$(reason, ($String*)nullptr, 0, updateCounts);
}

void BatchUpdateException::init$($ints* updateCounts) {
	BatchUpdateException::init$(($String*)nullptr, ($String*)nullptr, 0, updateCounts);
}

void BatchUpdateException::init$() {
	BatchUpdateException::init$(($String*)nullptr, ($String*)nullptr, 0, ($ints*)nullptr);
}

void BatchUpdateException::init$($Throwable* cause) {
	BatchUpdateException::init$((cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString())), ($String*)nullptr, 0, ($ints*)nullptr, cause);
}

void BatchUpdateException::init$($ints* updateCounts, $Throwable* cause) {
	BatchUpdateException::init$((cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString())), ($String*)nullptr, 0, updateCounts, cause);
}

void BatchUpdateException::init$($String* reason, $ints* updateCounts, $Throwable* cause) {
	BatchUpdateException::init$(reason, ($String*)nullptr, 0, updateCounts, cause);
}

void BatchUpdateException::init$($String* reason, $String* SQLState, $ints* updateCounts, $Throwable* cause) {
	BatchUpdateException::init$(reason, SQLState, 0, updateCounts, cause);
}

void BatchUpdateException::init$($String* reason, $String* SQLState, int32_t vendorCode, $ints* updateCounts, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, vendorCode, cause);
	$set(this, updateCounts, (updateCounts == nullptr) ? ($ints*)nullptr : $Arrays::copyOf(updateCounts, $nc(updateCounts)->length));
	$set(this, longUpdateCounts, (updateCounts == nullptr) ? ($longs*)nullptr : copyUpdateCount(updateCounts));
}

$ints* BatchUpdateException::getUpdateCounts() {
	return (this->updateCounts == nullptr) ? ($ints*)nullptr : $Arrays::copyOf(this->updateCounts, $nc(this->updateCounts)->length);
}

void BatchUpdateException::init$($String* reason, $String* SQLState, int32_t vendorCode, $longs* updateCounts, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, vendorCode, cause);
	$set(this, longUpdateCounts, (updateCounts == nullptr) ? ($longs*)nullptr : $Arrays::copyOf(updateCounts, $nc(updateCounts)->length));
	$set(this, updateCounts, (this->longUpdateCounts == nullptr) ? ($ints*)nullptr : copyUpdateCount(this->longUpdateCounts));
}

$longs* BatchUpdateException::getLargeUpdateCounts() {
	return (this->longUpdateCounts == nullptr) ? ($longs*)nullptr : $Arrays::copyOf(this->longUpdateCounts, $nc(this->longUpdateCounts)->length);
}

$longs* BatchUpdateException::copyUpdateCount($ints* uc) {
	$init(BatchUpdateException);
	$var($longs, copy, $new($longs, $nc(uc)->length));
	for (int32_t i = 0; i < uc->length; ++i) {
		copy->set(i, uc->get(i));
	}
	return copy;
}

$ints* BatchUpdateException::copyUpdateCount($longs* uc) {
	$init(BatchUpdateException);
	$var($ints, copy, $new($ints, $nc(uc)->length));
	for (int32_t i = 0; i < uc->length; ++i) {
		copy->set(i, (int32_t)uc->get(i));
	}
	return copy;
}

void BatchUpdateException::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($ints, tmp, $cast($ints, $nc(fields)->get("updateCounts"_s, ($Object*)nullptr)));
	$var($longs, tmp2, $cast($longs, fields->get("longUpdateCounts"_s, ($Object*)nullptr)));
	if (tmp != nullptr && tmp2 != nullptr && tmp->length != tmp2->length) {
		$throwNew($InvalidObjectException, "update counts are not the expected size"_s);
	}
	if (tmp != nullptr) {
		$set(this, updateCounts, $cast($ints, tmp->clone()));
	}
	if (tmp2 != nullptr) {
		$set(this, longUpdateCounts, $cast($longs, tmp2->clone()));
	}
	if (this->updateCounts == nullptr && this->longUpdateCounts != nullptr) {
		$set(this, updateCounts, copyUpdateCount(this->longUpdateCounts));
	}
	if (this->longUpdateCounts == nullptr && this->updateCounts != nullptr) {
		$set(this, longUpdateCounts, copyUpdateCount(this->updateCounts));
	}
}

void BatchUpdateException::writeObject($ObjectOutputStream* s) {
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("updateCounts"_s, $of(this->updateCounts));
	fields->put("longUpdateCounts"_s, $of(this->longUpdateCounts));
	s->writeFields();
}

BatchUpdateException::BatchUpdateException() {
}

BatchUpdateException::BatchUpdateException(const BatchUpdateException& e) : $SQLException(e) {
}

void BatchUpdateException::throw$() {
	throw *this;
}

$Class* BatchUpdateException::load$($String* name, bool initialize) {
	$loadClass(BatchUpdateException, name, initialize, &_BatchUpdateException_ClassInfo_, allocate$BatchUpdateException);
	return class$;
}

$Class* BatchUpdateException::class$ = nullptr;

	} // sql
} // java