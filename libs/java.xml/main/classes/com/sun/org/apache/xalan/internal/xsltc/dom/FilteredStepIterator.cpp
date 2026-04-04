#include <com/sun/org/apache/xalan/internal/xsltc/dom/FilteredStepIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/Filter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/StepIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <jcpp.h>

#undef END

using $Filter = ::com::sun::org::apache::xalan::internal::xsltc::dom::Filter;
using $StepIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::StepIterator;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

void FilteredStepIterator::init$($DTMAxisIterator* source, $DTMAxisIterator* iterator, $Filter* filter) {
	$StepIterator::init$(source, iterator);
	$set(this, _filter, filter);
}

int32_t FilteredStepIterator::next() {
	int32_t node = 0;
	while ((node = $StepIterator::next()) != $DTMAxisIterator::END) {
		if ($nc(this->_filter)->test(node)) {
			return returnNode(node);
		}
	}
	return node;
}

FilteredStepIterator::FilteredStepIterator() {
}

$Class* FilteredStepIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_filter", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/Filter;", nullptr, $PRIVATE, $field(FilteredStepIterator, _filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xalan/internal/xsltc/dom/Filter;)V", nullptr, $PUBLIC, $method(FilteredStepIterator, init$, void, $DTMAxisIterator*, $DTMAxisIterator*, $Filter*)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(FilteredStepIterator, next, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.dom.FilteredStepIterator",
		"com.sun.org.apache.xalan.internal.xsltc.dom.StepIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FilteredStepIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilteredStepIterator);
	});
	return class$;
}

$Class* FilteredStepIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com