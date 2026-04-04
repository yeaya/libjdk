#include <sun/rmi/transport/SequenceEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace rmi {
		namespace transport {

void SequenceEntry::init$(int64_t sequenceNum) {
	this->sequenceNum = sequenceNum;
	this->keep = false;
}

void SequenceEntry::retain(int64_t sequenceNum) {
	this->sequenceNum = sequenceNum;
	this->keep = true;
}

void SequenceEntry::update(int64_t sequenceNum) {
	this->sequenceNum = sequenceNum;
}

SequenceEntry::SequenceEntry() {
}

$Class* SequenceEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sequenceNum", "J", nullptr, 0, $field(SequenceEntry, sequenceNum)},
		{"keep", "Z", nullptr, 0, $field(SequenceEntry, keep)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, 0, $method(SequenceEntry, init$, void, int64_t)},
		{"retain", "(J)V", nullptr, 0, $virtualMethod(SequenceEntry, retain, void, int64_t)},
		{"update", "(J)V", nullptr, 0, $virtualMethod(SequenceEntry, update, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.SequenceEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SequenceEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequenceEntry);
	});
	return class$;
}

$Class* SequenceEntry::class$ = nullptr;

		} // transport
	} // rmi
} // sun