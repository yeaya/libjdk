#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

#undef END

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$Class* DTMAxisIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMAxisIterator, END)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, cloneIterator, DTMAxisIterator*)},
		{"getLast", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, getLast, int32_t)},
		{"getNodeByPosition", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, getNodeByPosition, int32_t, int32_t)},
		{"getPosition", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, getPosition, int32_t)},
		{"getStartNode", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, getStartNode, int32_t)},
		{"gotoMark", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, gotoMark, void)},
		{"isReverse", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, isReverse, bool)},
		{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, next, int32_t)},
		{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, reset, DTMAxisIterator*)},
		{"setMark", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, setMark, void)},
		{"setRestartable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, setRestartable, void, bool)},
		{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisIterator, setStartNode, DTMAxisIterator*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.dtm.DTMAxisIterator",
		nullptr,
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DTMAxisIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMAxisIterator);
	});
	return class$;
}

$Class* DTMAxisIterator::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com