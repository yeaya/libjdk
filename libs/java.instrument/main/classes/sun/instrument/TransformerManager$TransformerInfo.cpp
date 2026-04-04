#include <sun/instrument/TransformerManager$TransformerInfo.h>
#include <java/lang/instrument/ClassFileTransformer.h>
#include <sun/instrument/TransformerManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassFileTransformer = ::java::lang::instrument::ClassFileTransformer;
using $TransformerManager = ::sun::instrument::TransformerManager;

namespace sun {
	namespace instrument {

void TransformerManager$TransformerInfo::init$($TransformerManager* this$0, $ClassFileTransformer* transformer) {
	$set(this, this$0, this$0);
	$set(this, mTransformer, transformer);
	$set(this, mPrefix, nullptr);
}

$ClassFileTransformer* TransformerManager$TransformerInfo::transformer() {
	return this->mTransformer;
}

$String* TransformerManager$TransformerInfo::getPrefix() {
	return this->mPrefix;
}

void TransformerManager$TransformerInfo::setPrefix($String* prefix) {
	$set(this, mPrefix, prefix);
}

TransformerManager$TransformerInfo::TransformerManager$TransformerInfo() {
}

$Class* TransformerManager$TransformerInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/instrument/TransformerManager;", nullptr, $FINAL | $SYNTHETIC, $field(TransformerManager$TransformerInfo, this$0)},
		{"mTransformer", "Ljava/lang/instrument/ClassFileTransformer;", nullptr, $FINAL, $field(TransformerManager$TransformerInfo, mTransformer)},
		{"mPrefix", "Ljava/lang/String;", nullptr, 0, $field(TransformerManager$TransformerInfo, mPrefix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/instrument/TransformerManager;Ljava/lang/instrument/ClassFileTransformer;)V", nullptr, 0, $method(TransformerManager$TransformerInfo, init$, void, $TransformerManager*, $ClassFileTransformer*)},
		{"getPrefix", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(TransformerManager$TransformerInfo, getPrefix, $String*)},
		{"setPrefix", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(TransformerManager$TransformerInfo, setPrefix, void, $String*)},
		{"transformer", "()Ljava/lang/instrument/ClassFileTransformer;", nullptr, 0, $virtualMethod(TransformerManager$TransformerInfo, transformer, $ClassFileTransformer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.instrument.TransformerManager$TransformerInfo", "sun.instrument.TransformerManager", "TransformerInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.instrument.TransformerManager$TransformerInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.instrument.TransformerManager"
	};
	$loadClass(TransformerManager$TransformerInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformerManager$TransformerInfo);
	});
	return class$;
}

$Class* TransformerManager$TransformerInfo::class$ = nullptr;

	} // instrument
} // sun