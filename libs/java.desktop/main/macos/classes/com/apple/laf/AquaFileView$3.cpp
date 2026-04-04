#include <com/apple/laf/AquaFileView$3.h>
#include <com/apple/laf/AquaFileView.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $AquaFileView = ::com::apple::laf::AquaFileView;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileView$3::init$($AquaFileView* this$0) {
	$set(this, this$0, this$0);
	$LinkedHashMap::init$();
}

bool AquaFileView$3::removeEldestEntry($Map$Entry* eldest) {
	return size() > 256;
}

AquaFileView$3::AquaFileView$3() {
}

$Class* AquaFileView$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileView;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileView$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileView;)V", nullptr, 0, $method(AquaFileView$3, init$, void, $AquaFileView*)},
		{"removeEldestEntry", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<Ljava/io/File;Lcom/apple/laf/AquaFileView$FileInfo;>;)Z", $PROTECTED, $virtualMethod(AquaFileView$3, removeEldestEntry, bool, $Map$Entry*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFileView",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileView$3", nullptr, nullptr, 0},
		{"com.apple.laf.AquaFileView$FileInfo", "com.apple.laf.AquaFileView", "FileInfo", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileView$3",
		"java.util.LinkedHashMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/LinkedHashMap<Ljava/io/File;Lcom/apple/laf/AquaFileView$FileInfo;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileView"
	};
	$loadClass(AquaFileView$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileView$3));
	});
	return class$;
}

$Class* AquaFileView$3::class$ = nullptr;

		} // laf
	} // apple
} // com