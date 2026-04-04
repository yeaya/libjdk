#include <javax/management/remote/NotificationResult.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <javax/management/remote/TargetedNotification.h>
#include <jcpp.h>

using $TargetedNotificationArray = $Array<::javax::management::remote::TargetedNotification>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {

void NotificationResult::init$(int64_t earliestSequenceNumber, int64_t nextSequenceNumber, $TargetedNotificationArray* targetedNotifications) {
	validate(targetedNotifications, earliestSequenceNumber, nextSequenceNumber);
	this->earliestSequenceNumber = earliestSequenceNumber;
	this->nextSequenceNumber = nextSequenceNumber;
	$set(this, targetedNotifications, $nc(targetedNotifications)->length == 0 ? targetedNotifications : $cast($TargetedNotificationArray, targetedNotifications->clone()));
}

int64_t NotificationResult::getEarliestSequenceNumber() {
	return this->earliestSequenceNumber;
}

int64_t NotificationResult::getNextSequenceNumber() {
	return this->nextSequenceNumber;
}

$TargetedNotificationArray* NotificationResult::getTargetedNotifications() {
	return $nc(this->targetedNotifications)->length == 0 ? this->targetedNotifications : $cast($TargetedNotificationArray, this->targetedNotifications->clone());
}

$String* NotificationResult::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("NotificationResult: earliest="_s);
	var$0->append(getEarliestSequenceNumber());
	var$0->append("; next="_s);
	var$0->append(getNextSequenceNumber());
	var$0->append("; nnotifs="_s);
	var$0->append($nc($(getTargetedNotifications()))->length);
	return $str(var$0);
}

void NotificationResult::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
	try {
		validate(this->targetedNotifications, this->earliestSequenceNumber, this->nextSequenceNumber);
		$set(this, targetedNotifications, $nc(this->targetedNotifications)->length == 0 ? this->targetedNotifications : $cast($TargetedNotificationArray, this->targetedNotifications->clone()));
	} catch ($IllegalArgumentException& e) {
		$throwNew($InvalidObjectException, $(e->getMessage()));
	}
}

void NotificationResult::validate($TargetedNotificationArray* targetedNotifications, int64_t earliestSequenceNumber, int64_t nextSequenceNumber) {
	$init(NotificationResult);
	if (targetedNotifications == nullptr) {
		$var($String, msg, "Notifications null"_s);
		$throwNew($IllegalArgumentException, msg);
	}
	if (earliestSequenceNumber < 0 || nextSequenceNumber < 0) {
		$throwNew($IllegalArgumentException, "Bad sequence numbers"_s);
	}
}

NotificationResult::NotificationResult() {
}

$Class* NotificationResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotificationResult, serialVersionUID)},
		{"earliestSequenceNumber", "J", nullptr, $PRIVATE, $field(NotificationResult, earliestSequenceNumber)},
		{"nextSequenceNumber", "J", nullptr, $PRIVATE, $field(NotificationResult, nextSequenceNumber)},
		{"targetedNotifications", "[Ljavax/management/remote/TargetedNotification;", nullptr, $PRIVATE, $field(NotificationResult, targetedNotifications)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JJ[Ljavax/management/remote/TargetedNotification;)V", nullptr, $PUBLIC, $method(NotificationResult, init$, void, int64_t, int64_t, $TargetedNotificationArray*)},
		{"getEarliestSequenceNumber", "()J", nullptr, $PUBLIC, $virtualMethod(NotificationResult, getEarliestSequenceNumber, int64_t)},
		{"getNextSequenceNumber", "()J", nullptr, $PUBLIC, $virtualMethod(NotificationResult, getNextSequenceNumber, int64_t)},
		{"getTargetedNotifications", "()[Ljavax/management/remote/TargetedNotification;", nullptr, $PUBLIC, $virtualMethod(NotificationResult, getTargetedNotifications, $TargetedNotificationArray*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(NotificationResult, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NotificationResult, toString, $String*)},
		{"validate", "([Ljavax/management/remote/TargetedNotification;JJ)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NotificationResult, validate, void, $TargetedNotificationArray*, int64_t, int64_t), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.remote.NotificationResult",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotificationResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationResult);
	});
	return class$;
}

$Class* NotificationResult::class$ = nullptr;

		} // remote
	} // management
} // javax