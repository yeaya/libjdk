#include <javax/swing/text/InternationalFormatter.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Comparable.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/text/Format$Field.h>
#include <java/text/Format.h>
#include <java/text/ParseException.h>
#include <java/util/ArrayList.h>
#include <java/util/BitSet.h>
#include <java/util/Collection.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultFormatter$ReplaceHolder.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/InternationalFormatter$ExtendedReplaceHolder.h>
#include <javax/swing/text/InternationalFormatter$IncrementAction.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef DONE
#undef EMPTY_FIELD_ARRAY

using $Format$FieldArray = $Array<::java::text::Format$Field>;
using $ActionArray = $Array<::javax::swing::Action>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Format = ::java::text::Format;
using $ParseException = ::java::text::ParseException;
using $ArrayList = ::java::util::ArrayList;
using $BitSet = ::java::util::BitSet;
using $Collection = ::java::util::Collection;
using $Map = ::java::util::Map;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JTextField = ::javax::swing::JTextField;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $DefaultFormatter$ReplaceHolder = ::javax::swing::text::DefaultFormatter$ReplaceHolder;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;
using $InternationalFormatter$ExtendedReplaceHolder = ::javax::swing::text::InternationalFormatter$ExtendedReplaceHolder;
using $InternationalFormatter$IncrementAction = ::javax::swing::text::InternationalFormatter$IncrementAction;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _InternationalFormatter_FieldInfo_[] = {
	{"EMPTY_FIELD_ARRAY", "[Ljava/text/Format$Field;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InternationalFormatter, EMPTY_FIELD_ARRAY)},
	{"format", "Ljava/text/Format;", nullptr, $PRIVATE, $field(InternationalFormatter, format)},
	{"max", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<*>;", $PRIVATE, $field(InternationalFormatter, max)},
	{"min", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<*>;", $PRIVATE, $field(InternationalFormatter, min)},
	{"literalMask", "Ljava/util/BitSet;", nullptr, $PRIVATE | $TRANSIENT, $field(InternationalFormatter, literalMask)},
	{"iterator", "Ljava/text/AttributedCharacterIterator;", nullptr, $PRIVATE | $TRANSIENT, $field(InternationalFormatter, iterator)},
	{"validMask", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(InternationalFormatter, validMask)},
	{"string", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(InternationalFormatter, string)},
	{"ignoreDocumentMutate", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(InternationalFormatter, ignoreDocumentMutate)},
	{}
};

$MethodInfo _InternationalFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InternationalFormatter, init$, void)},
	{"<init>", "(Ljava/text/Format;)V", nullptr, $PUBLIC, $method(InternationalFormatter, init$, void, $Format*)},
	{"access$000", "(Ljavax/swing/text/InternationalFormatter;)Ljavax/swing/JFormattedTextField;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(InternationalFormatter, access$000, $JFormattedTextField*, InternationalFormatter*)},
	{"access$100", "(Ljavax/swing/text/InternationalFormatter;)Ljavax/swing/JFormattedTextField;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(InternationalFormatter, access$100, $JFormattedTextField*, InternationalFormatter*)},
	{"access$200", "(Ljavax/swing/text/InternationalFormatter;)Ljavax/swing/JFormattedTextField;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(InternationalFormatter, access$200, $JFormattedTextField*, InternationalFormatter*)},
	{"access$300", "(Ljavax/swing/text/InternationalFormatter;)V", nullptr, $STATIC | $SYNTHETIC, $staticMethod(InternationalFormatter, access$300, void, InternationalFormatter*)},
	{"adjustValue", "(Ljava/lang/Object;Ljava/util/Map;Ljava/lang/Object;I)Ljava/lang/Object;", "(Ljava/lang/Object;Ljava/util/Map<**>;Ljava/lang/Object;I)Ljava/lang/Object;", 0, $virtualMethod(InternationalFormatter, adjustValue, $Object*, Object$*, $Map*, Object$*, int32_t), "javax.swing.text.BadLocationException,java.text.ParseException"},
	{"canIncrement", "(Ljava/lang/Object;I)Z", nullptr, 0, $virtualMethod(InternationalFormatter, canIncrement, bool, Object$*, int32_t)},
	{"canReplace", "(Ljavax/swing/text/DefaultFormatter$ReplaceHolder;)Z", nullptr, 0, $virtualMethod(InternationalFormatter, canReplace, bool, $DefaultFormatter$ReplaceHolder*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(InternationalFormatter, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PROTECTED, $virtualMethod(InternationalFormatter, getActions, $ActionArray*)},
	{"getAdjustField", "(ILjava/util/Map;)Ljava/lang/Object;", "(ILjava/util/Map<**>;)Ljava/lang/Object;", 0, $virtualMethod(InternationalFormatter, getAdjustField, $Object*, int32_t, $Map*)},
	{"getAttributeStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I", nullptr, 0, $virtualMethod(InternationalFormatter, getAttributeStart, int32_t, $AttributedCharacterIterator$Attribute*)},
	{"getAttributes", "(I)Ljava/util/Map;", "(I)Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;", 0, $virtualMethod(InternationalFormatter, getAttributes, $Map*, int32_t)},
	{"getBufferedChar", "(I)C", nullptr, 0, $virtualMethod(InternationalFormatter, getBufferedChar, char16_t, int32_t)},
	{"getFieldTypeCountTo", "(Ljava/lang/Object;I)I", nullptr, $PRIVATE, $method(InternationalFormatter, getFieldTypeCountTo, int32_t, Object$*, int32_t)},
	{"getFields", "(I)[Ljava/text/Format$Field;", nullptr, $PUBLIC, $virtualMethod(InternationalFormatter, getFields, $Format$FieldArray*, int32_t)},
	{"getFormat", "()Ljava/text/Format;", nullptr, $PUBLIC, $virtualMethod(InternationalFormatter, getFormat, $Format*)},
	{"getIterator", "()Ljava/text/AttributedCharacterIterator;", nullptr, 0, $virtualMethod(InternationalFormatter, getIterator, $AttributedCharacterIterator*)},
	{"getLiteral", "(I)C", nullptr, 0, $virtualMethod(InternationalFormatter, getLiteral, char16_t, int32_t)},
	{"getLiteralCountTo", "(I)I", nullptr, 0, $virtualMethod(InternationalFormatter, getLiteralCountTo, int32_t, int32_t)},
	{"getMaximum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC, $virtualMethod(InternationalFormatter, getMaximum, $Comparable*)},
	{"getMinimum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC, $virtualMethod(InternationalFormatter, getMinimum, $Comparable*)},
	{"getNextNonliteralIndex", "(II)I", nullptr, $PRIVATE, $method(InternationalFormatter, getNextNonliteralIndex, int32_t, int32_t, int32_t)},
	{"getReplaceHolder", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/DefaultFormatter$ReplaceHolder;", nullptr, 0, $virtualMethod(InternationalFormatter, getReplaceHolder, $DefaultFormatter$ReplaceHolder*, $DocumentFilter$FilterBypass*, int32_t, int32_t, $String*, $AttributeSet*)},
	{"getSupportsIncrement", "()Z", nullptr, 0, $virtualMethod(InternationalFormatter, getSupportsIncrement, bool)},
	{"install", "(Ljavax/swing/JFormattedTextField;)V", nullptr, $PUBLIC, $virtualMethod(InternationalFormatter, install, void, $JFormattedTextField*)},
	{"isLiteral", "(I)Z", nullptr, 0, $virtualMethod(InternationalFormatter, isLiteral, bool, int32_t)},
	{"isLiteral", "(Ljava/util/Map;)Z", "(Ljava/util/Map<**>;)Z", 0, $virtualMethod(InternationalFormatter, isLiteral, bool, $Map*)},
	{"isNavigatable", "(I)Z", nullptr, 0, $virtualMethod(InternationalFormatter, isNavigatable, bool, int32_t)},
	{"isValidMask", "()Z", nullptr, 0, $virtualMethod(InternationalFormatter, isValidMask, bool)},
	{"isValidValue", "(Ljava/lang/Object;Z)Z", nullptr, 0, $virtualMethod(InternationalFormatter, isValidValue, bool, Object$*, bool)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(InternationalFormatter, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, 0, $virtualMethod(InternationalFormatter, replace, void, $DocumentFilter$FilterBypass*, int32_t, int32_t, $String*, $AttributeSet*), "javax.swing.text.BadLocationException"},
	{"replace", "(Ljavax/swing/text/DefaultFormatter$ReplaceHolder;)Z", nullptr, 0, $virtualMethod(InternationalFormatter, replace, bool, $DefaultFormatter$ReplaceHolder*), "javax.swing.text.BadLocationException"},
	{"repositionCursor", "(III)V", nullptr, $PRIVATE, $method(InternationalFormatter, repositionCursor, void, int32_t, int32_t, int32_t)},
	{"resetValue", "(Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(InternationalFormatter, resetValue, void, Object$*), "javax.swing.text.BadLocationException,java.text.ParseException"},
	{"selectField", "(Ljava/lang/Object;I)V", nullptr, 0, $virtualMethod(InternationalFormatter, selectField, void, Object$*, int32_t)},
	{"setFormat", "(Ljava/text/Format;)V", nullptr, $PUBLIC, $virtualMethod(InternationalFormatter, setFormat, void, $Format*)},
	{"setMaximum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC, $virtualMethod(InternationalFormatter, setMaximum, void, $Comparable*)},
	{"setMinimum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC, $virtualMethod(InternationalFormatter, setMinimum, void, $Comparable*)},
	{"stringToValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(InternationalFormatter, stringToValue, $Object*, $String*), "java.text.ParseException"},
	{"stringToValue", "(Ljava/lang/String;Ljava/text/Format;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(InternationalFormatter, stringToValue, $Object*, $String*, $Format*), "java.text.ParseException"},
	{"updateMask", "()V", nullptr, 0, $virtualMethod(InternationalFormatter, updateMask, void)},
	{"updateMask", "(Ljava/text/AttributedCharacterIterator;)V", nullptr, $PRIVATE, $method(InternationalFormatter, updateMask, void, $AttributedCharacterIterator*)},
	{"updateMaskIfNecessary", "()V", nullptr, 0, $virtualMethod(InternationalFormatter, updateMaskIfNecessary, void)},
	{"updateValue", "(Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(InternationalFormatter, updateValue, void, Object$*)},
	{"valueToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InternationalFormatter, valueToString, $String*, Object$*), "java.text.ParseException"},
	{}
};

$InnerClassInfo _InternationalFormatter_InnerClassesInfo_[] = {
	{"javax.swing.text.InternationalFormatter$IncrementAction", "javax.swing.text.InternationalFormatter", "IncrementAction", $PRIVATE},
	{"javax.swing.text.InternationalFormatter$ExtendedReplaceHolder", "javax.swing.text.InternationalFormatter", "ExtendedReplaceHolder", $STATIC},
	{}
};

$ClassInfo _InternationalFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.InternationalFormatter",
	"javax.swing.text.DefaultFormatter",
	nullptr,
	_InternationalFormatter_FieldInfo_,
	_InternationalFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_InternationalFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.InternationalFormatter$IncrementAction,javax.swing.text.InternationalFormatter$ExtendedReplaceHolder"
};

$Object* allocate$InternationalFormatter($Class* clazz) {
	return $of($alloc(InternationalFormatter));
}

$Format$FieldArray* InternationalFormatter::EMPTY_FIELD_ARRAY = nullptr;

void InternationalFormatter::access$300(InternationalFormatter* x0) {
	$init(InternationalFormatter);
	$nc(x0)->invalidEdit();
}

$JFormattedTextField* InternationalFormatter::access$200(InternationalFormatter* x0) {
	$init(InternationalFormatter);
	return $nc(x0)->getFormattedTextField();
}

$JFormattedTextField* InternationalFormatter::access$100(InternationalFormatter* x0) {
	$init(InternationalFormatter);
	return $nc(x0)->getFormattedTextField();
}

$JFormattedTextField* InternationalFormatter::access$000(InternationalFormatter* x0) {
	$init(InternationalFormatter);
	return $nc(x0)->getFormattedTextField();
}

void InternationalFormatter::init$() {
	$DefaultFormatter::init$();
	setOverwriteMode(false);
}

void InternationalFormatter::init$($Format* format) {
	InternationalFormatter::init$();
	setFormat(format);
}

void InternationalFormatter::setFormat($Format* format) {
	$set(this, format, format);
}

$Format* InternationalFormatter::getFormat() {
	return this->format;
}

void InternationalFormatter::setMinimum($Comparable* minimum) {
	if (getValueClass() == nullptr && minimum != nullptr) {
		setValueClass($of(minimum)->getClass());
	}
	$set(this, min, minimum);
}

$Comparable* InternationalFormatter::getMinimum() {
	return this->min;
}

void InternationalFormatter::setMaximum($Comparable* max) {
	if (getValueClass() == nullptr && max != nullptr) {
		setValueClass($of(max)->getClass());
	}
	$set(this, max, max);
}

$Comparable* InternationalFormatter::getMaximum() {
	return this->max;
}

void InternationalFormatter::install($JFormattedTextField* ftf) {
	$DefaultFormatter::install(ftf);
	updateMaskIfNecessary();
	positionCursorAtInitialLocation();
}

$String* InternationalFormatter::valueToString(Object$* value) {
	if (value == nullptr) {
		return ""_s;
	}
	$var($Format, f, getFormat());
	if (f == nullptr) {
		return $nc($of(value))->toString();
	}
	return $nc(f)->format(value);
}

$Object* InternationalFormatter::stringToValue($String* text) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, stringToValue(text, $(getFormat())));
	bool var$0 = value != nullptr && getValueClass() != nullptr;
	if (var$0 && !$nc(getValueClass())->isInstance(value)) {
		$assign(value, $DefaultFormatter::stringToValue($($of(value)->toString())));
	}
	try {
		if (!isValidValue(value, true)) {
			$throwNew($ParseException, "Value not within min/max range"_s, 0);
		}
	} catch ($ClassCastException& cce) {
		$throwNew($ParseException, $$str({"Class cast exception comparing values: "_s, cce}), 0);
	}
	return $of(value);
}

$Format$FieldArray* InternationalFormatter::getFields(int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if (getAllowsInvalid()) {
		updateMask();
	}
	$var($Map, attrs, getAttributes(offset));
	if (attrs != nullptr && attrs->size() > 0) {
		$var($ArrayList, al, $new($ArrayList));
		al->addAll($(attrs->keySet()));
		return $fcast($Format$FieldArray, al->toArray(InternationalFormatter::EMPTY_FIELD_ARRAY));
	}
	return InternationalFormatter::EMPTY_FIELD_ARRAY;
}

$Object* InternationalFormatter::clone() {
	$var(InternationalFormatter, formatter, $cast(InternationalFormatter, $DefaultFormatter::clone()));
	$set($nc(formatter), literalMask, nullptr);
	$set(formatter, iterator, nullptr);
	formatter->validMask = false;
	$set(formatter, string, nullptr);
	return $of(formatter);
}

$ActionArray* InternationalFormatter::getActions() {
	$useLocalCurrentObjectStackCache();
	if (getSupportsIncrement()) {
		return $new($ActionArray, {
			static_cast<$Action*>($$new($InternationalFormatter$IncrementAction, this, "increment"_s, 1)),
			static_cast<$Action*>($$new($InternationalFormatter$IncrementAction, this, "decrement"_s, -1))
		});
	}
	return nullptr;
}

$Object* InternationalFormatter::stringToValue($String* text, $Format* f) {
	if (f == nullptr) {
		return $of(text);
	}
	return $of($nc(f)->parseObject(text));
}

bool InternationalFormatter::isValidValue(Object$* value, bool wantsCCE) {
	$useLocalCurrentObjectStackCache();
	$var($Comparable, min, getMinimum());
	try {
		if (min != nullptr && min->compareTo(value) > 0) {
			return false;
		}
	} catch ($ClassCastException& cce) {
		if (wantsCCE) {
			$throw(cce);
		}
		return false;
	}
	$var($Comparable, max, getMaximum());
	try {
		if (max != nullptr && max->compareTo(value) < 0) {
			return false;
		}
	} catch ($ClassCastException& cce) {
		if (wantsCCE) {
			$throw(cce);
		}
		return false;
	}
	return true;
}

$Map* InternationalFormatter::getAttributes(int32_t index) {
	if (isValidMask()) {
		$var($AttributedCharacterIterator, iterator, getIterator());
		if (index >= 0 && index <= $nc(iterator)->getEndIndex()) {
			iterator->setIndex(index);
			return iterator->getAttributes();
		}
	}
	return nullptr;
}

int32_t InternationalFormatter::getAttributeStart($AttributedCharacterIterator$Attribute* id) {
	if (isValidMask()) {
		$var($AttributedCharacterIterator, iterator, getIterator());
		$nc(iterator)->first();
		while (iterator->current() != $CharacterIterator::DONE) {
			if (iterator->getAttribute(id) != nullptr) {
				return iterator->getIndex();
			}
			iterator->next();
		}
	}
	return -1;
}

$AttributedCharacterIterator* InternationalFormatter::getIterator() {
	return this->iterator;
}

void InternationalFormatter::updateMaskIfNecessary() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !getAllowsInvalid();
	if (var$0 && (getFormat() != nullptr)) {
		if (!isValidMask()) {
			updateMask();
		} else {
			$var($String, newString, $nc($(getFormattedTextField()))->getText());
			if (!$nc(newString)->equals(this->string)) {
				updateMask();
			}
		}
	}
}

void InternationalFormatter::updateMask() {
	$useLocalCurrentObjectStackCache();
	if (getFormat() != nullptr) {
		$var($Document, doc, $nc($(getFormattedTextField()))->getDocument());
		this->validMask = false;
		if (doc != nullptr) {
			try {
				$set(this, string, doc->getText(0, doc->getLength()));
			} catch ($BadLocationException& ble) {
				$set(this, string, nullptr);
			}
			if (this->string != nullptr) {
				try {
					$var($Object, value, stringToValue(this->string));
					$var($AttributedCharacterIterator, iterator, $nc($(getFormat()))->formatToCharacterIterator(value));
					updateMask(iterator);
				} catch ($ParseException& pe) {
				} catch ($IllegalArgumentException& iae) {
				} catch ($NullPointerException& npe) {
				}
			}
		}
	}
}

int32_t InternationalFormatter::getLiteralCountTo(int32_t index) {
	int32_t lCount = 0;
	for (int32_t counter = 0; counter < index; ++counter) {
		if (isLiteral(counter)) {
			++lCount;
		}
	}
	return lCount;
}

bool InternationalFormatter::isLiteral(int32_t index) {
	bool var$0 = isValidMask();
	if (var$0 && index < $nc(this->string)->length()) {
		return $nc(this->literalMask)->get(index);
	}
	return false;
}

char16_t InternationalFormatter::getLiteral(int32_t index) {
	bool var$0 = isValidMask() && this->string != nullptr;
	if (var$0 && index < $nc(this->string)->length()) {
		return $nc(this->string)->charAt(index);
	}
	return (char16_t)0;
}

bool InternationalFormatter::isNavigatable(int32_t offset) {
	return !isLiteral(offset);
}

void InternationalFormatter::updateValue(Object$* value) {
	$DefaultFormatter::updateValue(value);
	updateMaskIfNecessary();
}

void InternationalFormatter::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	if (this->ignoreDocumentMutate) {
		$nc(fb)->replace(offset, length, text, attrs);
		return;
	}
	$DefaultFormatter::replace(fb, offset, length, text, attrs);
}

int32_t InternationalFormatter::getNextNonliteralIndex(int32_t index, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	int32_t max = $nc($($nc($(getFormattedTextField()))->getDocument()))->getLength();
	while (index >= 0 && index < max) {
		if (isLiteral(index)) {
			index += direction;
		} else {
			return index;
		}
	}
	return (direction == -1) ? 0 : max;
}

bool InternationalFormatter::canReplace($DefaultFormatter$ReplaceHolder* rh) {
	$useLocalCurrentObjectStackCache();
	if (!getAllowsInvalid()) {
		$var($String, text, $nc(rh)->text);
		int32_t tl = (text != nullptr) ? $nc(text)->length() : 0;
		$var($JTextComponent, c, getFormattedTextField());
		if (tl == 0 && rh->length == 1 && $nc(c)->getSelectionStart() != rh->offset) {
			rh->offset = getNextNonliteralIndex(rh->offset, -1);
		} else if (getOverwriteMode()) {
			int32_t pos = rh->offset;
			int32_t textPos = pos;
			bool overflown = false;
			for (int32_t i = 0; i < rh->length; ++i) {
				while (isLiteral(pos)) {
					++pos;
				}
				if (pos >= $nc(this->string)->length()) {
					pos = textPos;
					overflown = true;
					break;
				}
				textPos = ++pos;
			}
			if (overflown || c->getSelectedText() == nullptr) {
				rh->length = pos - rh->offset;
			}
		} else if (tl > 0) {
			rh->offset = getNextNonliteralIndex(rh->offset, 1);
		} else {
			rh->offset = getNextNonliteralIndex(rh->offset, -1);
		}
		$nc(($cast($InternationalFormatter$ExtendedReplaceHolder, rh)))->endOffset = rh->offset;
		($cast($InternationalFormatter$ExtendedReplaceHolder, rh))->endTextLength = (rh->text != nullptr) ? $nc(rh->text)->length() : 0;
	} else {
		$nc(($cast($InternationalFormatter$ExtendedReplaceHolder, rh)))->endOffset = $nc(rh)->offset;
		($cast($InternationalFormatter$ExtendedReplaceHolder, rh))->endTextLength = (rh->text != nullptr) ? $nc(rh->text)->length() : 0;
	}
	bool can = $DefaultFormatter::canReplace(rh);
	if (can && !getAllowsInvalid()) {
		$nc(($cast($InternationalFormatter$ExtendedReplaceHolder, rh)))->resetFromValue(this);
	}
	return can;
}

bool InternationalFormatter::replace($DefaultFormatter$ReplaceHolder* rh) {
	$useLocalCurrentObjectStackCache();
	int32_t start = -1;
	int32_t direction = 1;
	int32_t literalCount = -1;
	bool var$0 = $nc(rh)->length > 0 && (rh->text == nullptr || $nc($nc(rh)->text)->length() == 0);
	if (var$0 && ($nc($(getFormattedTextField()))->getSelectionStart() != rh->offset || $nc(rh)->length > 1)) {
		direction = -1;
	}
	if (!getAllowsInvalid()) {
		if (($nc(rh)->text == nullptr || $nc($nc(rh)->text)->length() == 0) && rh->length > 0) {
			start = $nc($(getFormattedTextField()))->getSelectionStart();
		} else {
			start = rh->offset;
		}
		literalCount = getLiteralCountTo(start);
	}
	if ($DefaultFormatter::replace(rh)) {
		if (start != -1) {
			int32_t end = $nc(($cast($InternationalFormatter$ExtendedReplaceHolder, rh)))->endOffset;
			end += ($cast($InternationalFormatter$ExtendedReplaceHolder, rh))->endTextLength;
			repositionCursor(literalCount, end, direction);
		} else {
			start = $nc(($cast($InternationalFormatter$ExtendedReplaceHolder, rh)))->endOffset;
			if (direction == 1) {
				start += ($cast($InternationalFormatter$ExtendedReplaceHolder, rh))->endTextLength;
			}
			repositionCursor(start, direction);
		}
		return true;
	}
	return false;
}

void InternationalFormatter::repositionCursor(int32_t startLiteralCount, int32_t end, int32_t direction) {
	int32_t endLiteralCount = getLiteralCountTo(end);
	if (endLiteralCount != end) {
		end -= startLiteralCount;
		for (int32_t counter = 0; counter < end; ++counter) {
			if (isLiteral(counter)) {
				++end;
			}
		}
	}
	repositionCursor(end, 1);
}

char16_t InternationalFormatter::getBufferedChar(int32_t index) {
	if (isValidMask()) {
		if (this->string != nullptr && index < $nc(this->string)->length()) {
			return $nc(this->string)->charAt(index);
		}
	}
	return (char16_t)0;
}

bool InternationalFormatter::isValidMask() {
	return this->validMask;
}

bool InternationalFormatter::isLiteral($Map* attributes) {
	return ((attributes == nullptr) || $nc(attributes)->size() == 0);
}

void InternationalFormatter::updateMask($AttributedCharacterIterator* iterator) {
	$useLocalCurrentObjectStackCache();
	if (iterator != nullptr) {
		this->validMask = true;
		$set(this, iterator, iterator);
		if (this->literalMask == nullptr) {
			$set(this, literalMask, $new($BitSet));
		} else {
			for (int32_t counter = $nc(this->literalMask)->length() - 1; counter >= 0; --counter) {
				$nc(this->literalMask)->clear(counter);
			}
		}
		iterator->first();
		while (iterator->current() != $CharacterIterator::DONE) {
			$var($Map, attributes, iterator->getAttributes());
			bool set = isLiteral(attributes);
			int32_t start = iterator->getIndex();
			int32_t end = iterator->getRunLimit();
			while (start < end) {
				if (set) {
					$nc(this->literalMask)->set(start);
				} else {
					$nc(this->literalMask)->clear(start);
				}
				++start;
			}
			iterator->setIndex(start);
		}
	}
}

bool InternationalFormatter::canIncrement(Object$* field, int32_t cursorPosition) {
	return (field != nullptr);
}

void InternationalFormatter::selectField(Object$* f, int32_t count) {
	$useLocalCurrentObjectStackCache();
	$var($AttributedCharacterIterator, iterator, getIterator());
	if (iterator != nullptr && ($instanceOf($AttributedCharacterIterator$Attribute, f))) {
		$var($AttributedCharacterIterator$Attribute, field, $cast($AttributedCharacterIterator$Attribute, f));
		iterator->first();
		while (iterator->current() != $CharacterIterator::DONE) {
			while (true) {
				bool var$0 = iterator->getAttribute(field) == nullptr;
				if (!(var$0 && iterator->next() != $CharacterIterator::DONE)) {
					break;
				}
				{
				}
			}
			if (iterator->current() != $CharacterIterator::DONE) {
				int32_t limit = iterator->getRunLimit(field);
				if (--count <= 0) {
					$nc($(getFormattedTextField()))->select(iterator->getIndex(), limit);
					break;
				}
				iterator->setIndex(limit);
				iterator->next();
			}
		}
	}
}

$Object* InternationalFormatter::getAdjustField(int32_t start, $Map* attributes) {
	return $of(nullptr);
}

int32_t InternationalFormatter::getFieldTypeCountTo(Object$* f, int32_t start) {
	$useLocalCurrentObjectStackCache();
	$var($AttributedCharacterIterator, iterator, getIterator());
	int32_t count = 0;
	if (iterator != nullptr && ($instanceOf($AttributedCharacterIterator$Attribute, f))) {
		$var($AttributedCharacterIterator$Attribute, field, $cast($AttributedCharacterIterator$Attribute, f));
		iterator->first();
		while (iterator->getIndex() < start) {
			while (true) {
				bool var$0 = iterator->getAttribute(field) == nullptr;
				if (!(var$0 && iterator->next() != $CharacterIterator::DONE)) {
					break;
				}
				{
				}
			}
			if (iterator->current() != $CharacterIterator::DONE) {
				iterator->setIndex(iterator->getRunLimit(field));
				iterator->next();
				++count;
			} else {
				break;
			}
		}
	}
	return count;
}

$Object* InternationalFormatter::adjustValue(Object$* value, $Map* attributes, Object$* field, int32_t direction) {
	return $of(nullptr);
}

bool InternationalFormatter::getSupportsIncrement() {
	return false;
}

void InternationalFormatter::resetValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc($(getFormattedTextField()))->getDocument());
	$var($String, string, valueToString(value));
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->ignoreDocumentMutate = true;
			$nc(doc)->remove(0, doc->getLength());
			doc->insertString(0, string, nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->ignoreDocumentMutate = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	updateValue(value);
}

void InternationalFormatter::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	updateMaskIfNecessary();
}

$DefaultFormatter$ReplaceHolder* InternationalFormatter::getReplaceHolder($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	if (this->replaceHolder == nullptr) {
		$set(this, replaceHolder, $new($InternationalFormatter$ExtendedReplaceHolder));
	}
	return $DefaultFormatter::getReplaceHolder(fb, offset, length, text, attrs);
}

void clinit$InternationalFormatter($Class* class$) {
	$assignStatic(InternationalFormatter::EMPTY_FIELD_ARRAY, $new($Format$FieldArray, 0));
}

InternationalFormatter::InternationalFormatter() {
}

$Class* InternationalFormatter::load$($String* name, bool initialize) {
	$loadClass(InternationalFormatter, name, initialize, &_InternationalFormatter_ClassInfo_, clinit$InternationalFormatter, allocate$InternationalFormatter);
	return class$;
}

$Class* InternationalFormatter::class$ = nullptr;

		} // text
	} // swing
} // javax