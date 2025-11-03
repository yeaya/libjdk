#include <java/awt/datatransfer/MimeTypeParameterList.h>

#include <java/awt/datatransfer/MimeTypeParseException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TSPECIALS

using $MimeTypeParseException = ::java::awt::datatransfer::MimeTypeParseException;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace awt {
		namespace datatransfer {

$FieldInfo _MimeTypeParameterList_FieldInfo_[] = {
	{"parameters", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(MimeTypeParameterList, parameters)},
	{"TSPECIALS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MimeTypeParameterList, TSPECIALS)},
	{}
};

$MethodInfo _MimeTypeParameterList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MimeTypeParameterList::*)()>(&MimeTypeParameterList::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MimeTypeParameterList::*)($String*)>(&MimeTypeParameterList::init$)), "java.awt.datatransfer.MimeTypeParseException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isTokenChar", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&MimeTypeParameterList::isTokenChar))},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.awt.datatransfer.MimeTypeParseException"},
	{"quote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&MimeTypeParameterList::quote))},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"skipWhiteSpace", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t)>(&MimeTypeParameterList::skipWhiteSpace))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unquote", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&MimeTypeParameterList::unquote))},
	{}
};

$ClassInfo _MimeTypeParameterList_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.datatransfer.MimeTypeParameterList",
	"java.lang.Object",
	"java.lang.Cloneable",
	_MimeTypeParameterList_FieldInfo_,
	_MimeTypeParameterList_MethodInfo_
};

$Object* allocate$MimeTypeParameterList($Class* clazz) {
	return $of($alloc(MimeTypeParameterList));
}

$String* MimeTypeParameterList::TSPECIALS = nullptr;

void MimeTypeParameterList::init$() {
	$set(this, parameters, $new($Hashtable));
}

void MimeTypeParameterList::init$($String* rawdata) {
	$set(this, parameters, $new($Hashtable));
	parse(rawdata);
}

int32_t MimeTypeParameterList::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t code = $Integer::MAX_VALUE / 45;
	$var($String, paramName, nullptr);
	$var($Enumeration, enum_, this->getNames());
	while ($nc(enum_)->hasMoreElements()) {
		$assign(paramName, $cast($String, enum_->nextElement()));
		code += $nc(paramName)->hashCode();
		code += $nc($(this->get(paramName)))->hashCode();
	}
	return code;
}

bool MimeTypeParameterList::equals(Object$* thatObject) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(MimeTypeParameterList, thatObject))) {
		return false;
	}
	$var(MimeTypeParameterList, that, $cast(MimeTypeParameterList, thatObject));
	int32_t var$0 = this->size();
	if (var$0 != $nc(that)->size()) {
		return false;
	}
	$var($String, name, nullptr);
	$var($String, thisValue, nullptr);
	$var($String, thatValue, nullptr);
	$var($Set, entries, $nc(this->parameters)->entrySet());
	$var($Iterator, iterator, $nc(entries)->iterator());
	$var($Map$Entry, entry, nullptr);
	while ($nc(iterator)->hasNext()) {
		$assign(entry, $cast($Map$Entry, iterator->next()));
		$assign(name, $cast($String, $nc(entry)->getKey()));
		$assign(thisValue, $cast($String, entry->getValue()));
		$assign(thatValue, $cast($String, $nc($nc(that)->parameters)->get(name)));
		if ((thisValue == nullptr) || (thatValue == nullptr)) {
			if (thisValue != thatValue) {
				return false;
			}
		} else if (!$nc(thisValue)->equals(thatValue)) {
			return false;
		}
	}
	return true;
}

void MimeTypeParameterList::parse($String* rawdata) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(rawdata)->length();
	if (length > 0) {
		int32_t currentIndex = skipWhiteSpace(rawdata, 0);
		int32_t lastIndex = 0;
		if (currentIndex < length) {
			char16_t currentChar = rawdata->charAt(currentIndex);
			while ((currentIndex < length) && (currentChar == u';')) {
				$var($String, name, nullptr);
				$var($String, value, nullptr);
				bool foundit = false;
				++currentIndex;
				currentIndex = skipWhiteSpace(rawdata, currentIndex);
				if (currentIndex < length) {
					lastIndex = currentIndex;
					currentChar = rawdata->charAt(currentIndex);
					while ((currentIndex < length) && isTokenChar(currentChar)) {
						++currentIndex;
						currentChar = rawdata->charAt(currentIndex);
					}
					$assign(name, $(rawdata->substring(lastIndex, currentIndex))->toLowerCase());
					currentIndex = skipWhiteSpace(rawdata, currentIndex);
					if ((currentIndex < length) && (rawdata->charAt(currentIndex) == u'=')) {
						++currentIndex;
						currentIndex = skipWhiteSpace(rawdata, currentIndex);
						if (currentIndex < length) {
							currentChar = rawdata->charAt(currentIndex);
							if (currentChar == u'\"') {
								++currentIndex;
								lastIndex = currentIndex;
								if (currentIndex < length) {
									foundit = false;
									while ((currentIndex < length) && !foundit) {
										currentChar = rawdata->charAt(currentIndex);
										if (currentChar == u'\\') {
											currentIndex += 2;
										} else if (currentChar == u'\"') {
											foundit = true;
										} else {
											++currentIndex;
										}
									}
									if (currentChar == u'\"') {
										$assign(value, unquote($(rawdata->substring(lastIndex, currentIndex))));
										++currentIndex;
									} else {
										$throwNew($MimeTypeParseException, "Encountered unterminated quoted parameter value."_s);
									}
								} else {
									$throwNew($MimeTypeParseException, "Encountered unterminated quoted parameter value."_s);
								}
							} else if (isTokenChar(currentChar)) {
								lastIndex = currentIndex;
								foundit = false;
								while ((currentIndex < length) && !foundit) {
									currentChar = rawdata->charAt(currentIndex);
									if (isTokenChar(currentChar)) {
										++currentIndex;
									} else {
										foundit = true;
									}
								}
								$assign(value, rawdata->substring(lastIndex, currentIndex));
							} else {
								$throwNew($MimeTypeParseException, $$str({"Unexpected character encountered at index "_s, $$str(currentIndex)}));
							}
							$nc(this->parameters)->put(name, value);
						} else {
							$throwNew($MimeTypeParseException, $$str({"Couldn\'t find a value for parameter named "_s, name}));
						}
					} else {
						$throwNew($MimeTypeParseException, "Couldn\'t find the \'=\' that separates a parameter name from its value."_s);
					}
				} else {
					$throwNew($MimeTypeParseException, "Couldn\'t find parameter name"_s);
				}
				currentIndex = skipWhiteSpace(rawdata, currentIndex);
				if (currentIndex < length) {
					currentChar = rawdata->charAt(currentIndex);
				}
			}
			if (currentIndex < length) {
				$throwNew($MimeTypeParseException, "More characters encountered in input than expected."_s);
			}
		}
	}
}

int32_t MimeTypeParameterList::size() {
	return $nc(this->parameters)->size();
}

bool MimeTypeParameterList::isEmpty() {
	return $nc(this->parameters)->isEmpty();
}

$String* MimeTypeParameterList::get($String* name) {
	$useLocalCurrentObjectStackCache();
	return $cast($String, $nc(this->parameters)->get($($($nc(name)->trim())->toLowerCase())));
}

void MimeTypeParameterList::set($String* name, $String* value) {
	$useLocalCurrentObjectStackCache();
	$nc(this->parameters)->put($($($nc(name)->trim())->toLowerCase()), value);
}

void MimeTypeParameterList::remove($String* name) {
	$useLocalCurrentObjectStackCache();
	$nc(this->parameters)->remove($($($nc(name)->trim())->toLowerCase()));
}

$Enumeration* MimeTypeParameterList::getNames() {
	return $nc(this->parameters)->keys();
}

$String* MimeTypeParameterList::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buffer, $new($StringBuilder, $nc(this->parameters)->size() * 16));
	$var($Enumeration, keys, $nc(this->parameters)->keys());
	while ($nc(keys)->hasMoreElements()) {
		buffer->append("; "_s);
		$var($String, key, $cast($String, keys->nextElement()));
		buffer->append(key);
		buffer->append(u'=');
		buffer->append($(quote($cast($String, $($nc(this->parameters)->get(key))))));
	}
	return buffer->toString();
}

$Object* MimeTypeParameterList::clone() {
	$var(MimeTypeParameterList, newObj, nullptr);
	try {
		$assign(newObj, $cast(MimeTypeParameterList, $Cloneable::clone()));
	} catch ($CloneNotSupportedException& cannotHappen) {
	}
	$set($nc(newObj), parameters, $cast($Hashtable, $nc(this->parameters)->clone()));
	return $of(newObj);
}

bool MimeTypeParameterList::isTokenChar(char16_t c) {
	$init(MimeTypeParameterList);
	return ((c > 32) && (c < 127)) && ($nc(MimeTypeParameterList::TSPECIALS)->indexOf((int32_t)c) < 0);
}

int32_t MimeTypeParameterList::skipWhiteSpace($String* rawdata, int32_t i) {
	$init(MimeTypeParameterList);
	int32_t length = $nc(rawdata)->length();
	if (i < length) {
		char16_t c = rawdata->charAt(i);
		while ((i < length) && $Character::isWhitespace(c)) {
			++i;
			c = rawdata->charAt(i);
		}
	}
	return i;
}

$String* MimeTypeParameterList::quote($String* value) {
	$init(MimeTypeParameterList);
	bool needsQuotes = false;
	int32_t length = $nc(value)->length();
	for (int32_t i = 0; (i < length) && !needsQuotes; ++i) {
		needsQuotes = !isTokenChar(value->charAt(i));
	}
	if (needsQuotes) {
		$var($StringBuilder, buffer, $new($StringBuilder, $cast(int32_t, (length * 1.5))));
		buffer->append(u'\"');
		for (int32_t i = 0; i < length; ++i) {
			char16_t c = value->charAt(i);
			if ((c == u'\\') || (c == u'\"')) {
				buffer->append(u'\\');
			}
			buffer->append(c);
		}
		buffer->append(u'\"');
		return buffer->toString();
	} else {
		return value;
	}
}

$String* MimeTypeParameterList::unquote($String* value) {
	$init(MimeTypeParameterList);
	int32_t valueLength = $nc(value)->length();
	$var($StringBuilder, buffer, $new($StringBuilder, valueLength));
	bool escaped = false;
	for (int32_t i = 0; i < valueLength; ++i) {
		char16_t currentChar = value->charAt(i);
		if (!escaped && (currentChar != u'\\')) {
			buffer->append(currentChar);
		} else if (escaped) {
			buffer->append(currentChar);
			escaped = false;
		} else {
			escaped = true;
		}
	}
	return buffer->toString();
}

MimeTypeParameterList::MimeTypeParameterList() {
}

void clinit$MimeTypeParameterList($Class* class$) {
	$assignStatic(MimeTypeParameterList::TSPECIALS, "()<>@,;:\\\"/[]?="_s);
}

$Class* MimeTypeParameterList::load$($String* name, bool initialize) {
	$loadClass(MimeTypeParameterList, name, initialize, &_MimeTypeParameterList_ClassInfo_, clinit$MimeTypeParameterList, allocate$MimeTypeParameterList);
	return class$;
}

$Class* MimeTypeParameterList::class$ = nullptr;

		} // datatransfer
	} // awt
} // java