#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/SortedSet.h>
#include <java/util/TreeMap.h>
#include <java/util/TreeSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SortedSet = ::java::util::SortedSet;
using $TreeMap = ::java::util::TreeMap;
using $TreeSet = ::java::util::TreeSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void TIFFTagSet::init$() {
	$set(this, allowedTagsByNumber, $new($TreeMap));
	$set(this, allowedTagsByName, $new($TreeMap));
}

void TIFFTagSet::init$($List* tags) {
	$useLocalObjectStack();
	$set(this, allowedTagsByNumber, $new($TreeMap));
	$set(this, allowedTagsByName, $new($TreeMap));
	if (tags == nullptr) {
		$throwNew($IllegalArgumentException, "tags == null!"_s);
	}
	{
		$var($Iterator, i$, $nc(tags)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			{
				if (!($instanceOf($TIFFTag, o))) {
					$throwNew($IllegalArgumentException, "tags contains a non-TIFFTag!"_s);
				}
				$var($TIFFTag, tag, $cast($TIFFTag, o));
				$nc(this->allowedTagsByNumber)->put($($Integer::valueOf($nc(tag)->getNumber())), tag);
				$nc(this->allowedTagsByName)->put($(tag->getName()), tag);
			}
		}
	}
}

$TIFFTag* TIFFTagSet::getTag(int32_t tagNumber) {
	return $cast($TIFFTag, $nc(this->allowedTagsByNumber)->get($($Integer::valueOf(tagNumber))));
}

$TIFFTag* TIFFTagSet::getTag($String* tagName) {
	if (tagName == nullptr) {
		$throwNew($IllegalArgumentException, "tagName == null!"_s);
	}
	return $cast($TIFFTag, $nc(this->allowedTagsByName)->get(tagName));
}

$SortedSet* TIFFTagSet::getTagNumbers() {
	$useLocalObjectStack();
	$var($Set, tagNumbers, $nc(this->allowedTagsByNumber)->keySet());
	$var($SortedSet, sortedTagNumbers, nullptr);
	if ($instanceOf($SortedSet, tagNumbers)) {
		$assign(sortedTagNumbers, $cast($SortedSet, tagNumbers));
	} else {
		$assign(sortedTagNumbers, $new($TreeSet, tagNumbers));
	}
	return $Collections::unmodifiableSortedSet(sortedTagNumbers);
}

$SortedSet* TIFFTagSet::getTagNames() {
	$useLocalObjectStack();
	$var($Set, tagNames, $nc(this->allowedTagsByName)->keySet());
	$var($SortedSet, sortedTagNames, nullptr);
	if ($instanceOf($SortedSet, tagNames)) {
		$assign(sortedTagNames, $cast($SortedSet, tagNames));
	} else {
		$assign(sortedTagNames, $new($TreeSet, tagNames));
	}
	return $Collections::unmodifiableSortedSet(sortedTagNames);
}

TIFFTagSet::TIFFTagSet() {
}

$Class* TIFFTagSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"allowedTagsByNumber", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<Ljava/lang/Integer;Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE, $field(TIFFTagSet, allowedTagsByNumber)},
		{"allowedTagsByName", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<Ljava/lang/String;Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE, $field(TIFFTagSet, allowedTagsByName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TIFFTagSet, init$, void)},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;)V", $PUBLIC, $method(TIFFTagSet, init$, void, $List*)},
		{"getTag", "(I)Ljavax/imageio/plugins/tiff/TIFFTag;", nullptr, $PUBLIC, $virtualMethod(TIFFTagSet, getTag, $TIFFTag*, int32_t)},
		{"getTag", "(Ljava/lang/String;)Ljavax/imageio/plugins/tiff/TIFFTag;", nullptr, $PUBLIC, $virtualMethod(TIFFTagSet, getTag, $TIFFTag*, $String*)},
		{"getTagNames", "()Ljava/util/SortedSet;", "()Ljava/util/SortedSet<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(TIFFTagSet, getTagNames, $SortedSet*)},
		{"getTagNumbers", "()Ljava/util/SortedSet;", "()Ljava/util/SortedSet<Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(TIFFTagSet, getTagNumbers, $SortedSet*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.imageio.plugins.tiff.TIFFTagSet",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFTagSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFTagSet);
	});
	return class$;
}

$Class* TIFFTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax