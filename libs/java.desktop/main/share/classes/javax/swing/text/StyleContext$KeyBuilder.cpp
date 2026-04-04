#include <javax/swing/text/StyleContext$KeyBuilder.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/StyleContext$SmallAttributeSet.h>
#include <javax/swing/text/StyleContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyleContext$SmallAttributeSet = ::javax::swing::text::StyleContext$SmallAttributeSet;

namespace javax {
	namespace swing {
		namespace text {

void StyleContext$KeyBuilder::init$($StyleContext* this$0) {
	$set(this, this$0, this$0);
	$set(this, keys, $new($Vector));
	$set(this, data, $new($Vector));
}

void StyleContext$KeyBuilder::initialize($AttributeSet* a) {
	$useLocalObjectStack();
	if ($instanceOf($StyleContext$SmallAttributeSet, a)) {
		initialize($cast($StyleContext$SmallAttributeSet, a)->attributes);
	} else {
		$nc(this->keys)->removeAllElements();
		$nc(this->data)->removeAllElements();
		$var($Enumeration, names, $nc(a)->getAttributeNames());
		while ($nc(names)->hasMoreElements()) {
			$var($Object, name, names->nextElement());
			addAttribute(name, $(a->getAttribute(name)));
		}
	}
}

void StyleContext$KeyBuilder::initialize($ObjectArray* sorted) {
	$nc(this->keys)->removeAllElements();
	$nc(this->data)->removeAllElements();
	int32_t n = $nc(sorted)->length;
	for (int32_t i = 0; i < n; i += 2) {
		this->keys->addElement(sorted->get(i));
		this->data->addElement(sorted->get(i + 1));
	}
}

$ObjectArray* StyleContext$KeyBuilder::createTable() {
	$useLocalObjectStack();
	int32_t n = $nc(this->keys)->size();
	$var($ObjectArray, tbl, $new($ObjectArray, 2 * n));
	for (int32_t i = 0; i < n; ++i) {
		int32_t offs = 2 * i;
		tbl->set(offs, $(this->keys->elementAt(i)));
		tbl->set(offs + 1, $($nc(this->data)->elementAt(i)));
	}
	return tbl;
}

int32_t StyleContext$KeyBuilder::getCount() {
	return $nc(this->keys)->size();
}

void StyleContext$KeyBuilder::addAttribute(Object$* key, Object$* value) {
	$nc(this->keys)->addElement(key);
	$nc(this->data)->addElement(value);
}

void StyleContext$KeyBuilder::addAttributes($AttributeSet* attr) {
	$useLocalObjectStack();
	if ($instanceOf($StyleContext$SmallAttributeSet, attr)) {
		$var($ObjectArray, tbl, $cast($StyleContext$SmallAttributeSet, attr)->attributes);
		int32_t n = $nc(tbl)->length;
		for (int32_t i = 0; i < n; i += 2) {
			addAttribute(tbl->get(i), tbl->get(i + 1));
		}
	} else {
		$var($Enumeration, names, $nc(attr)->getAttributeNames());
		while ($nc(names)->hasMoreElements()) {
			$var($Object, name, names->nextElement());
			addAttribute(name, $(attr->getAttribute(name)));
		}
	}
}

void StyleContext$KeyBuilder::removeAttribute(Object$* key) {
	$useLocalObjectStack();
	int32_t n = $nc(this->keys)->size();
	for (int32_t i = 0; i < n; ++i) {
		if ($$nc(this->keys->elementAt(i))->equals(key)) {
			this->keys->removeElementAt(i);
			$nc(this->data)->removeElementAt(i);
			return;
		}
	}
}

void StyleContext$KeyBuilder::removeAttributes($Enumeration* names) {
	$useLocalObjectStack();
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		removeAttribute(name);
	}
}

void StyleContext$KeyBuilder::removeAttributes($AttributeSet* attr) {
	$useLocalObjectStack();
	$var($Enumeration, names, $nc(attr)->getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		$var($Object, value, attr->getAttribute(name));
		removeSearchAttribute(name, value);
	}
}

void StyleContext$KeyBuilder::removeSearchAttribute(Object$* ikey, Object$* value) {
	$useLocalObjectStack();
	int32_t n = $nc(this->keys)->size();
	for (int32_t i = 0; i < n; ++i) {
		if ($$nc(this->keys->elementAt(i))->equals(ikey)) {
			if ($$nc($nc(this->data)->elementAt(i))->equals(value)) {
				this->keys->removeElementAt(i);
				this->data->removeElementAt(i);
			}
			return;
		}
	}
}

StyleContext$KeyBuilder::StyleContext$KeyBuilder() {
}

$Class* StyleContext$KeyBuilder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/StyleContext;", nullptr, $FINAL | $SYNTHETIC, $field(StyleContext$KeyBuilder, this$0)},
		{"keys", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PRIVATE, $field(StyleContext$KeyBuilder, keys)},
		{"data", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PRIVATE, $field(StyleContext$KeyBuilder, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/StyleContext;)V", nullptr, 0, $method(StyleContext$KeyBuilder, init$, void, $StyleContext*)},
		{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(StyleContext$KeyBuilder, addAttribute, void, Object$*, Object$*)},
		{"addAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(StyleContext$KeyBuilder, addAttributes, void, $AttributeSet*)},
		{"createTable", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StyleContext$KeyBuilder, createTable, $ObjectArray*)},
		{"getCount", "()I", nullptr, 0, $virtualMethod(StyleContext$KeyBuilder, getCount, int32_t)},
		{"initialize", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(StyleContext$KeyBuilder, initialize, void, $AttributeSet*)},
		{"initialize", "([Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(StyleContext$KeyBuilder, initialize, void, $ObjectArray*)},
		{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(StyleContext$KeyBuilder, removeAttribute, void, Object$*)},
		{"removeAttributes", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<*>;)V", $PUBLIC, $virtualMethod(StyleContext$KeyBuilder, removeAttributes, void, $Enumeration*)},
		{"removeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $virtualMethod(StyleContext$KeyBuilder, removeAttributes, void, $AttributeSet*)},
		{"removeSearchAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(StyleContext$KeyBuilder, removeSearchAttribute, void, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyleContext$KeyBuilder", "javax.swing.text.StyleContext", "KeyBuilder", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.StyleContext$KeyBuilder",
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
		"javax.swing.text.StyleContext"
	};
	$loadClass(StyleContext$KeyBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StyleContext$KeyBuilder);
	});
	return class$;
}

$Class* StyleContext$KeyBuilder::class$ = nullptr;

		} // text
	} // swing
} // javax