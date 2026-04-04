#include <javax/swing/text/html/CSS$BorderStyle.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS$Value.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef DASHED
#undef DOTTED
#undef DOUBLE
#undef GROOVE
#undef INSET
#undef NONE
#undef OUTSET
#undef RIDGE
#undef SOLID

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSS$Value = ::javax::swing::text::html::CSS$Value;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSS$BorderStyle::init$() {
	$CSS$CssValue::init$();
}

$CSS$Value* CSS$BorderStyle::getValue() {
	return this->style;
}

$Object* CSS$BorderStyle::parseCssValue($String* value) {
	$useLocalObjectStack();
	$var($CSS$Value, cssv, $CSS::getValue(value));
	if (cssv != nullptr) {
		$init($CSS$Value);
		if ((cssv == $CSS$Value::INSET) || (cssv == $CSS$Value::OUTSET) || (cssv == $CSS$Value::NONE) || (cssv == $CSS$Value::DOTTED) || (cssv == $CSS$Value::DASHED) || (cssv == $CSS$Value::SOLID) || (cssv == $CSS$Value::DOUBLE) || (cssv == $CSS$Value::GROOVE) || (cssv == $CSS$Value::RIDGE)) {
			$var(CSS$BorderStyle, bs, $new(CSS$BorderStyle));
			$set(bs, svalue, value);
			$set(bs, style, cssv);
			return bs;
		}
	}
	return nullptr;
}

void CSS$BorderStyle::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if (this->style == nullptr) {
		s->writeObject(nullptr);
	} else {
		s->writeObject($(this->style->toString()));
	}
}

void CSS$BorderStyle::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$var($Object, value, s->readObject());
	if (value != nullptr) {
		$set(this, style, $CSS::getValue($cast($String, value)));
	}
}

CSS$BorderStyle::CSS$BorderStyle() {
}

$Class* CSS$BorderStyle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"style", "Ljavax/swing/text/html/CSS$Value;", nullptr, $PRIVATE | $TRANSIENT, $field(CSS$BorderStyle, style)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSS$BorderStyle, init$, void)},
		{"getValue", "()Ljavax/swing/text/html/CSS$Value;", nullptr, 0, $virtualMethod(CSS$BorderStyle, getValue, $CSS$Value*)},
		{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(CSS$BorderStyle, parseCssValue, $Object*, $String*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(CSS$BorderStyle, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(CSS$BorderStyle, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSS$BorderStyle", "javax.swing.text.html.CSS", "BorderStyle", $STATIC},
		{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSS$BorderStyle",
		"javax.swing.text.html.CSS$CssValue",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.CSS"
	};
	$loadClass(CSS$BorderStyle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSS$BorderStyle);
	});
	return class$;
}

$Class* CSS$BorderStyle::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax