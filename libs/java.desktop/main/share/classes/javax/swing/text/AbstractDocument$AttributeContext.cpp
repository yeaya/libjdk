#include <javax/swing/text/AbstractDocument$AttributeContext.h>

#include <java/util/Enumeration.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _AbstractDocument$AttributeContext_MethodInfo_[] = {
	{"addAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, addAttribute, $AttributeSet*, $AttributeSet*, Object$*, Object$*)},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, addAttributes, $AttributeSet*, $AttributeSet*, $AttributeSet*)},
	{"getEmptySet", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, getEmptySet, $AttributeSet*)},
	{"reclaim", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, reclaim, void, $AttributeSet*)},
	{"removeAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, removeAttribute, $AttributeSet*, $AttributeSet*, Object$*)},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration;)Ljavax/swing/text/AttributeSet;", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration<*>;)Ljavax/swing/text/AttributeSet;", $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, removeAttributes, $AttributeSet*, $AttributeSet*, $Enumeration*)},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, removeAttributes, $AttributeSet*, $AttributeSet*, $AttributeSet*)},
	{}
};

$InnerClassInfo _AbstractDocument$AttributeContext_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$AttributeContext", "javax.swing.text.AbstractDocument", "AttributeContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDocument$AttributeContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.AbstractDocument$AttributeContext",
	nullptr,
	nullptr,
	nullptr,
	_AbstractDocument$AttributeContext_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$AttributeContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$AttributeContext($Class* clazz) {
	return $of($alloc(AbstractDocument$AttributeContext));
}

$Class* AbstractDocument$AttributeContext::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$AttributeContext, name, initialize, &_AbstractDocument$AttributeContext_ClassInfo_, allocate$AbstractDocument$AttributeContext);
	return class$;
}

$Class* AbstractDocument$AttributeContext::class$ = nullptr;

		} // text
	} // swing
} // javax