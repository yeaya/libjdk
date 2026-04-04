#include <javax/print/MimeType$ParameterMapEntry.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Map$Entry.h>
#include <javax/print/MimeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Map$Entry = ::java::util::Map$Entry;
using $MimeType = ::javax::print::MimeType;

namespace javax {
	namespace print {

void MimeType$ParameterMapEntry::init$($MimeType* this$0, int32_t theIndex) {
	$set(this, this$0, this$0);
	this->myIndex = theIndex;
}

$Object* MimeType$ParameterMapEntry::getKey() {
	return $of($nc(this->this$0->myPieces)->get(this->myIndex));
}

$Object* MimeType$ParameterMapEntry::getValue() {
	return $of($nc(this->this$0->myPieces)->get(this->myIndex + 1));
}

$String* MimeType$ParameterMapEntry::setValue($String* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool MimeType$ParameterMapEntry::equals(Object$* o) {
	$useLocalObjectStack();
	bool var$0 = o != nullptr && $instanceOf($Map$Entry, o) && $$sure($String, getKey())->equals($($cast($Map$Entry, o)->getKey()));
	return (var$0 && $$sure($String, getValue())->equals($($cast($Map$Entry, o)->getValue())));
}

int32_t MimeType$ParameterMapEntry::hashCode() {
	$useLocalObjectStack();
	int32_t var$0 = $$sure($String, getKey())->hashCode();
	return var$0 ^ $$sure($String, getValue())->hashCode();
}

$Object* MimeType$ParameterMapEntry::setValue(Object$* value) {
	return $of(this->setValue($cast($String, value)));
}

MimeType$ParameterMapEntry::MimeType$ParameterMapEntry() {
}

$Class* MimeType$ParameterMapEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/print/MimeType;", nullptr, $FINAL | $SYNTHETIC, $field(MimeType$ParameterMapEntry, this$0)},
		{"myIndex", "I", nullptr, $PRIVATE, $field(MimeType$ParameterMapEntry, myIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/print/MimeType;I)V", nullptr, $PUBLIC, $method(MimeType$ParameterMapEntry, init$, void, $MimeType*, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MimeType$ParameterMapEntry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MimeType$ParameterMapEntry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MimeType$ParameterMapEntry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MimeType$ParameterMapEntry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MimeType$ParameterMapEntry, setValue, $String*, $String*)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MimeType$ParameterMapEntry, setValue, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.MimeType$ParameterMapEntry", "javax.print.MimeType", "ParameterMapEntry", $PRIVATE},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.MimeType$ParameterMapEntry",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.print.MimeType"
	};
	$loadClass(MimeType$ParameterMapEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MimeType$ParameterMapEntry);
	});
	return class$;
}

$Class* MimeType$ParameterMapEntry::class$ = nullptr;

	} // print
} // javax