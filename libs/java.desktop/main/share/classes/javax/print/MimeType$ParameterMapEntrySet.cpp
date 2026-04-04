#include <javax/print/MimeType$ParameterMapEntrySet.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <javax/print/MimeType$ParameterMapEntrySetIterator.h>
#include <javax/print/MimeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $MimeType = ::javax::print::MimeType;
using $MimeType$ParameterMapEntrySetIterator = ::javax::print::MimeType$ParameterMapEntrySetIterator;

namespace javax {
	namespace print {

void MimeType$ParameterMapEntrySet::init$($MimeType* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* MimeType$ParameterMapEntrySet::iterator() {
	return $new($MimeType$ParameterMapEntrySetIterator, this->this$0);
}

int32_t MimeType$ParameterMapEntrySet::size() {
	return ($nc(this->this$0->myPieces)->length - 2) / 2;
}

MimeType$ParameterMapEntrySet::MimeType$ParameterMapEntrySet() {
}

$Class* MimeType$ParameterMapEntrySet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/print/MimeType;", nullptr, $FINAL | $SYNTHETIC, $field(MimeType$ParameterMapEntrySet, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/print/MimeType;)V", nullptr, $PRIVATE, $method(MimeType$ParameterMapEntrySet, init$, void, $MimeType*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", $PUBLIC, $virtualMethod(MimeType$ParameterMapEntrySet, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(MimeType$ParameterMapEntrySet, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.MimeType$ParameterMapEntrySet", "javax.print.MimeType", "ParameterMapEntrySet", $PRIVATE},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.MimeType$ParameterMapEntrySet",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractSet<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.print.MimeType"
	};
	$loadClass(MimeType$ParameterMapEntrySet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MimeType$ParameterMapEntrySet));
	});
	return class$;
}

$Class* MimeType$ParameterMapEntrySet::class$ = nullptr;

	} // print
} // javax