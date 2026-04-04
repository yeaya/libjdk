#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::init$($LambdaToMethod$LambdaAnalyzerPreprocessor* this$1) {
	$set(this, this$1, this$1);
	$set(this, map, $new($HashMap));
}

int32_t LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::getIndex($StringBuilder* buf) {
	$useLocalObjectStack();
	$var($String, temp, $nc(buf)->toString());
	$var($Integer, count, $cast($Integer, $nc(this->map)->get(temp)));
	if (count == nullptr) {
		$assign(count, $Integer::valueOf(0));
	}
	$assign(count, $Integer::valueOf(($nc(count)->intValue() + 1)));
	this->map->put(temp, count);
	return count->intValue();
}

LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, this$1)},
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;)V", nullptr, $PRIVATE, $method(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, init$, void, $LambdaToMethod$LambdaAnalyzerPreprocessor*)},
		{"getIndex", "(Ljava/lang/StringBuilder;)I", nullptr, 0, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, getIndex, int32_t, $StringBuilder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "SyntheticMethodNameCounter", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter",
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
		"com.sun.tools.javac.comp.LambdaToMethod"
	};
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter);
	});
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com