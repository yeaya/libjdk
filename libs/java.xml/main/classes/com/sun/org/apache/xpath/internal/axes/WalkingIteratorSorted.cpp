#include <com/sun/org/apache/xpath/internal/axes/WalkingIteratorSorted.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkingIterator.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CHILD
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DESCENDANTSFROMROOT
#undef DESCENDANTSORSELFFROMROOT
#undef ROOT
#undef SELF

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $AxesWalker = ::com::sun::org::apache::xpath::internal::axes::AxesWalker;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $WalkingIterator = ::com::sun::org::apache::xpath::internal::axes::WalkingIterator;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _WalkingIteratorSorted_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WalkingIteratorSorted, serialVersionUID)},
	{"m_inNaturalOrderStatic", "Z", nullptr, $PROTECTED, $field(WalkingIteratorSorted, m_inNaturalOrderStatic)},
	{}
};

$MethodInfo _WalkingIteratorSorted_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC, $method(WalkingIteratorSorted, init$, void, $PrefixResolver*)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;IIZ)V", nullptr, 0, $method(WalkingIteratorSorted, init$, void, $Compiler*, int32_t, int32_t, bool), "javax.xml.transform.TransformerException"},
	{"canBeWalkedInNaturalDocOrderStatic", "()Z", nullptr, 0, $virtualMethod(WalkingIteratorSorted, canBeWalkedInNaturalDocOrderStatic, bool)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(WalkingIteratorSorted, fixupVariables, void, $List*, int32_t)},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC, $virtualMethod(WalkingIteratorSorted, isDocOrdered, bool)},
	{}
};

$ClassInfo _WalkingIteratorSorted_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.WalkingIteratorSorted",
	"com.sun.org.apache.xpath.internal.axes.WalkingIterator",
	nullptr,
	_WalkingIteratorSorted_FieldInfo_,
	_WalkingIteratorSorted_MethodInfo_
};

$Object* allocate$WalkingIteratorSorted($Class* clazz) {
	return $of($alloc(WalkingIteratorSorted));
}

void WalkingIteratorSorted::init$($PrefixResolver* nscontext) {
	$WalkingIterator::init$(nscontext);
	this->m_inNaturalOrderStatic = false;
}

void WalkingIteratorSorted::init$($Compiler* compiler, int32_t opPos, int32_t analysis, bool shouldLoadWalkers) {
	$WalkingIterator::init$(compiler, opPos, analysis, shouldLoadWalkers);
	this->m_inNaturalOrderStatic = false;
}

bool WalkingIteratorSorted::isDocOrdered() {
	return this->m_inNaturalOrderStatic;
}

bool WalkingIteratorSorted::canBeWalkedInNaturalDocOrderStatic() {
	if (nullptr != this->m_firstWalker) {
		$var($AxesWalker, walker, this->m_firstWalker);
		int32_t prevAxis = -1;
		bool prevIsSimpleDownAxis = true;
		for (int32_t i = 0; nullptr != walker; ++i) {
			int32_t axis = walker->getAxis();
			if (walker->isDocOrdered()) {
				bool isSimpleDownAxis = ((axis == $Axis::CHILD) || (axis == $Axis::SELF) || (axis == $Axis::ROOT));
				if (isSimpleDownAxis || (axis == -1)) {
					$assign(walker, walker->getNextWalker());
				} else {
					bool isLastWalker = (nullptr == walker->getNextWalker());
					if (isLastWalker) {
						if (walker->isDocOrdered() && (axis == $Axis::DESCENDANT || axis == $Axis::DESCENDANTORSELF || axis == $Axis::DESCENDANTSFROMROOT || axis == $Axis::DESCENDANTSORSELFFROMROOT) || (axis == $Axis::ATTRIBUTE)) {
							return true;
						}
					}
					return false;
				}
			} else {
				return false;
			}
		}
		return true;
	}
	return false;
}

void WalkingIteratorSorted::fixupVariables($List* vars, int32_t globalsSize) {
	$WalkingIterator::fixupVariables(vars, globalsSize);
	int32_t analysis = getAnalysisBits();
	if ($WalkerFactory::isNaturalDocOrder(analysis)) {
		this->m_inNaturalOrderStatic = true;
	} else {
		this->m_inNaturalOrderStatic = false;
	}
}

WalkingIteratorSorted::WalkingIteratorSorted() {
}

$Class* WalkingIteratorSorted::load$($String* name, bool initialize) {
	$loadClass(WalkingIteratorSorted, name, initialize, &_WalkingIteratorSorted_ClassInfo_, allocate$WalkingIteratorSorted);
	return class$;
}

$Class* WalkingIteratorSorted::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com