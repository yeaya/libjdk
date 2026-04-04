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

$Class* AbstractDocument$AttributeContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, addAttribute, $AttributeSet*, $AttributeSet*, Object$*, Object$*)},
		{"addAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, addAttributes, $AttributeSet*, $AttributeSet*, $AttributeSet*)},
		{"getEmptySet", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, getEmptySet, $AttributeSet*)},
		{"reclaim", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, reclaim, void, $AttributeSet*)},
		{"removeAttribute", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, removeAttribute, $AttributeSet*, $AttributeSet*, Object$*)},
		{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration;)Ljavax/swing/text/AttributeSet;", "(Ljavax/swing/text/AttributeSet;Ljava/util/Enumeration<*>;)Ljavax/swing/text/AttributeSet;", $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, removeAttributes, $AttributeSet*, $AttributeSet*, $Enumeration*)},
		{"removeAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractDocument$AttributeContext, removeAttributes, $AttributeSet*, $AttributeSet*, $AttributeSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AbstractDocument$AttributeContext", "javax.swing.text.AbstractDocument", "AttributeContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.AbstractDocument$AttributeContext",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.AbstractDocument"
	};
	$loadClass(AbstractDocument$AttributeContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocument$AttributeContext);
	});
	return class$;
}

$Class* AbstractDocument$AttributeContext::class$ = nullptr;

		} // text
	} // swing
} // javax