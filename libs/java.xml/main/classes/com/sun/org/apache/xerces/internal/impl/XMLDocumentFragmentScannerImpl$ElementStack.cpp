#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$ElementStack.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <jcpp.h>

using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLDocumentFragmentScannerImpl$ElementStack_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDocumentFragmentScannerImpl$ElementStack, this$0)},
	{"fElements", "[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack, fElements)},
	{"fInt", "[I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack, fInt)},
	{"fDepth", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack, fDepth)},
	{"fCount", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack, fCount)},
	{"fPosition", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack, fPosition)},
	{"fMark", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack, fMark)},
	{"fLastDepth", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack, fLastDepth)},
	{}
};

$MethodInfo _XMLDocumentFragmentScannerImpl$ElementStack_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl;)V", nullptr, $PUBLIC, $method(XMLDocumentFragmentScannerImpl$ElementStack, init$, void, $XMLDocumentFragmentScannerImpl*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$ElementStack, clear, void)},
	{"getLastPoppedElement", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$ElementStack, getLastPoppedElement, $QName*)},
	{"getNext", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$ElementStack, getNext, $QName*)},
	{"matchElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$ElementStack, matchElement, bool, $QName*)},
	{"nextElement", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$ElementStack, nextElement, $QName*)},
	{"popElement", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$ElementStack, popElement, $QName*)},
	{"push", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$ElementStack, push, void)},
	{"pushElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$ElementStack, pushElement, $QName*, $QName*)},
	{"reposition", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFragmentScannerImpl$ElementStack, reposition, void)},
	{}
};

$InnerClassInfo _XMLDocumentFragmentScannerImpl$ElementStack_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$ElementStack", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "ElementStack", $PROTECTED},
	{}
};

$ClassInfo _XMLDocumentFragmentScannerImpl$ElementStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$ElementStack",
	"java.lang.Object",
	nullptr,
	_XMLDocumentFragmentScannerImpl$ElementStack_FieldInfo_,
	_XMLDocumentFragmentScannerImpl$ElementStack_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentFragmentScannerImpl$ElementStack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl"
};

$Object* allocate$XMLDocumentFragmentScannerImpl$ElementStack($Class* clazz) {
	return $of($alloc(XMLDocumentFragmentScannerImpl$ElementStack));
}

void XMLDocumentFragmentScannerImpl$ElementStack::init$($XMLDocumentFragmentScannerImpl* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, fInt, $new($ints, 20));
	$set(this, fElements, $new($QNameArray, 20));
	for (int32_t i = 0; i < $nc(this->fElements)->length; ++i) {
		$nc(this->fElements)->set(i, $$new($QName));
	}
}

$QName* XMLDocumentFragmentScannerImpl$ElementStack::pushElement($QName* element) {
	$useLocalCurrentObjectStackCache();
	if (this->fDepth == $nc(this->fElements)->length) {
		$var($QNameArray, array, $new($QNameArray, $nc(this->fElements)->length * 2));
		$System::arraycopy(this->fElements, 0, array, 0, this->fDepth);
		$set(this, fElements, array);
		for (int32_t i = this->fDepth; i < $nc(this->fElements)->length; ++i) {
			$nc(this->fElements)->set(i, $$new($QName));
		}
	}
	$nc($nc(this->fElements)->get(this->fDepth))->setValues(element);
	return $nc(this->fElements)->get(this->fDepth++);
}

$QName* XMLDocumentFragmentScannerImpl$ElementStack::getNext() {
	if (this->fPosition == this->fCount) {
		this->fPosition = this->fMark;
	}
	return $nc(this->fElements)->get(this->fPosition);
}

void XMLDocumentFragmentScannerImpl$ElementStack::push() {
	$nc(this->fInt)->set(++this->fDepth, this->fPosition++);
}

bool XMLDocumentFragmentScannerImpl$ElementStack::matchElement($QName* element) {
	bool match = false;
	if (this->fLastDepth > this->fDepth && this->fDepth <= 3) {
		if ($nc(element)->rawname == $nc($nc(this->fElements)->get(this->fDepth - 1))->rawname) {
			this->this$0->fAdd = false;
			this->fMark = this->fDepth - 1;
			this->fPosition = this->fMark;
			match = true;
			--this->fCount;
		} else {
			this->this$0->fAdd = true;
		}
	}
	if (match) {
		$nc(this->fInt)->set(this->fDepth, this->fPosition++);
	} else {
		$nc(this->fInt)->set(this->fDepth, this->fCount - 1);
	}
	if (this->fCount == $nc(this->fElements)->length) {
		this->this$0->fSkip = false;
		this->this$0->fAdd = false;
		reposition();
		return false;
	}
	this->fLastDepth = this->fDepth;
	return match;
}

$QName* XMLDocumentFragmentScannerImpl$ElementStack::nextElement() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->fSkip) {
		++this->fDepth;
		return $nc(this->fElements)->get(this->fCount++);
	} else if (this->fDepth == $nc(this->fElements)->length) {
		$var($QNameArray, array, $new($QNameArray, $nc(this->fElements)->length * 2));
		$System::arraycopy(this->fElements, 0, array, 0, this->fDepth);
		$set(this, fElements, array);
		for (int32_t i = this->fDepth; i < $nc(this->fElements)->length; ++i) {
			$nc(this->fElements)->set(i, $$new($QName));
		}
	}
	return $nc(this->fElements)->get(this->fDepth++);
}

$QName* XMLDocumentFragmentScannerImpl$ElementStack::popElement() {
	if (this->this$0->fSkip || this->this$0->fAdd) {
		return $nc(this->fElements)->get($nc(this->fInt)->get(this->fDepth--));
	} else {
		return $nc(this->fElements)->get(--this->fDepth);
	}
}

void XMLDocumentFragmentScannerImpl$ElementStack::reposition() {
	for (int32_t i = 2; i <= this->fDepth; ++i) {
		$nc(this->fElements)->set(i - 1, $nc(this->fElements)->get($nc(this->fInt)->get(i)));
	}
}

void XMLDocumentFragmentScannerImpl$ElementStack::clear() {
	this->fDepth = 0;
	this->fLastDepth = 0;
	this->fCount = 0;
	this->fPosition = (this->fMark = 1);
}

$QName* XMLDocumentFragmentScannerImpl$ElementStack::getLastPoppedElement() {
	return $nc(this->fElements)->get(this->fDepth);
}

XMLDocumentFragmentScannerImpl$ElementStack::XMLDocumentFragmentScannerImpl$ElementStack() {
}

$Class* XMLDocumentFragmentScannerImpl$ElementStack::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentFragmentScannerImpl$ElementStack, name, initialize, &_XMLDocumentFragmentScannerImpl$ElementStack_ClassInfo_, allocate$XMLDocumentFragmentScannerImpl$ElementStack);
	return class$;
}

$Class* XMLDocumentFragmentScannerImpl$ElementStack::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com