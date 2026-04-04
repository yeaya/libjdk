#include <javax/print/MimeType$ParameterMapEntrySetIterator.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <javax/print/MimeType$ParameterMapEntry.h>
#include <javax/print/MimeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $MimeType = ::javax::print::MimeType;
using $MimeType$ParameterMapEntry = ::javax::print::MimeType$ParameterMapEntry;

namespace javax {
	namespace print {

void MimeType$ParameterMapEntrySetIterator::init$($MimeType* this$0) {
	$set(this, this$0, this$0);
	this->myIndex = 2;
}

bool MimeType$ParameterMapEntrySetIterator::hasNext() {
	return this->myIndex < $nc(this->this$0->myPieces)->length;
}

$Object* MimeType$ParameterMapEntrySetIterator::next() {
	if (hasNext()) {
		$var($MimeType$ParameterMapEntry, result, $new($MimeType$ParameterMapEntry, this->this$0, this->myIndex));
		this->myIndex += 2;
		return result;
	} else {
		$throwNew($NoSuchElementException);
	}
}

void MimeType$ParameterMapEntrySetIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

MimeType$ParameterMapEntrySetIterator::MimeType$ParameterMapEntrySetIterator() {
}

$Class* MimeType$ParameterMapEntrySetIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/print/MimeType;", nullptr, $FINAL | $SYNTHETIC, $field(MimeType$ParameterMapEntrySetIterator, this$0)},
		{"myIndex", "I", nullptr, $PRIVATE, $field(MimeType$ParameterMapEntrySetIterator, myIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/print/MimeType;)V", nullptr, $PRIVATE, $method(MimeType$ParameterMapEntrySetIterator, init$, void, $MimeType*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(MimeType$ParameterMapEntrySetIterator, hasNext, bool)},
		{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(MimeType$ParameterMapEntrySetIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(MimeType$ParameterMapEntrySetIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.MimeType$ParameterMapEntrySetIterator", "javax.print.MimeType", "ParameterMapEntrySetIterator", $PRIVATE},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.MimeType$ParameterMapEntrySetIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.print.MimeType"
	};
	$loadClass(MimeType$ParameterMapEntrySetIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MimeType$ParameterMapEntrySetIterator);
	});
	return class$;
}

$Class* MimeType$ParameterMapEntrySetIterator::class$ = nullptr;

	} // print
} // javax