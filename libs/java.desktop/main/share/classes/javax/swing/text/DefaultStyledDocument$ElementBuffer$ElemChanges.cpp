#include <javax/swing/text/DefaultStyledDocument$ElementBuffer$ElemChanges.h>
#include <java/util/Vector.h>
#include <javax/swing/text/DefaultStyledDocument$ElementBuffer.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $DefaultStyledDocument$ElementBuffer = ::javax::swing::text::DefaultStyledDocument$ElementBuffer;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {

void DefaultStyledDocument$ElementBuffer$ElemChanges::init$($DefaultStyledDocument$ElementBuffer* this$1, $Element* parent, int32_t index, bool isFracture) {
	$set(this, this$1, this$1);
	$set(this, parent, parent);
	this->index = index;
	this->isFracture = isFracture;
	$set(this, added, $new($Vector));
	$set(this, removed, $new($Vector));
}

$String* DefaultStyledDocument$ElementBuffer$ElemChanges::toString() {
	return $str({"added: "_s, this->added, "\nremoved: "_s, this->removed, "\n"_s});
}

DefaultStyledDocument$ElementBuffer$ElemChanges::DefaultStyledDocument$ElementBuffer$ElemChanges() {
}

$Class* DefaultStyledDocument$ElementBuffer$ElemChanges::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/DefaultStyledDocument$ElementBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, this$1)},
		{"parent", "Ljavax/swing/text/Element;", nullptr, 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, parent)},
		{"index", "I", nullptr, 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, index)},
		{"added", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Element;>;", 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, added)},
		{"removed", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Element;>;", 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, removed)},
		{"isFracture", "Z", nullptr, 0, $field(DefaultStyledDocument$ElementBuffer$ElemChanges, isFracture)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/DefaultStyledDocument$ElementBuffer;Ljavax/swing/text/Element;IZ)V", nullptr, 0, $method(DefaultStyledDocument$ElementBuffer$ElemChanges, init$, void, $DefaultStyledDocument$ElementBuffer*, $Element*, int32_t, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultStyledDocument$ElementBuffer$ElemChanges, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultStyledDocument$ElementBuffer", "javax.swing.text.DefaultStyledDocument", "ElementBuffer", $PUBLIC},
		{"javax.swing.text.DefaultStyledDocument$ElementBuffer$ElemChanges", "javax.swing.text.DefaultStyledDocument$ElementBuffer", "ElemChanges", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultStyledDocument$ElementBuffer$ElemChanges",
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
		"javax.swing.text.DefaultStyledDocument"
	};
	$loadClass(DefaultStyledDocument$ElementBuffer$ElemChanges, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultStyledDocument$ElementBuffer$ElemChanges);
	});
	return class$;
}

$Class* DefaultStyledDocument$ElementBuffer$ElemChanges::class$ = nullptr;

		} // text
	} // swing
} // javax