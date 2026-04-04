#include <javax/swing/filechooser/FileNameExtensionFilter.h>
#include <java/io/File.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

#undef ENGLISH

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace javax {
	namespace swing {
		namespace filechooser {

void FileNameExtensionFilter::init$($String* description, $StringArray* extensions) {
	$useLocalObjectStack();
	$FileFilter::init$();
	if (extensions == nullptr || extensions->length == 0) {
		$throwNew($IllegalArgumentException, "Extensions must be non-null and not empty"_s);
	}
	$set(this, description, description);
	$set(this, extensions, $new($StringArray, $nc(extensions)->length));
	$set(this, lowerCaseExtensions, $new($StringArray, extensions->length));
	for (int32_t i = 0; i < extensions->length; ++i) {
		if (extensions->get(i) == nullptr || $nc(extensions->get(i))->length() == 0) {
			$throwNew($IllegalArgumentException, "Each extension must be non-null and not empty"_s);
		}
		this->extensions->set(i, extensions->get(i));
		$init($Locale);
		$nc(this->lowerCaseExtensions)->set(i, $($nc(extensions->get(i))->toLowerCase($Locale::ENGLISH)));
	}
}

bool FileNameExtensionFilter::accept($File* f) {
	$useLocalObjectStack();
	if (f != nullptr) {
		if (f->isDirectory()) {
			return true;
		}
		$var($String, fileName, f->getName());
		int32_t i = $nc(fileName)->lastIndexOf(u'.');
		if (i > 0 && i < fileName->length() - 1) {
			$init($Locale);
			$var($String, desiredExtension, $(fileName->substring(i + 1))->toLowerCase($Locale::ENGLISH));
			{
				$var($StringArray, arr$, this->lowerCaseExtensions);
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($String, extension, arr$->get(i$));
					if (desiredExtension->equals(extension)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

$String* FileNameExtensionFilter::getDescription() {
	return this->description;
}

$StringArray* FileNameExtensionFilter::getExtensions() {
	$var($StringArray, result, $new($StringArray, $nc(this->extensions)->length));
	$System::arraycopy(this->extensions, 0, result, 0, this->extensions->length);
	return result;
}

$String* FileNameExtensionFilter::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($FileFilter::toString()));
	var$0->append("[description="_s);
	var$0->append($(getDescription()));
	var$0->append(" extensions="_s);
	var$0->append($($Arrays::asList($(getExtensions()))));
	var$0->append("]"_s);
	return $str(var$0);
}

FileNameExtensionFilter::FileNameExtensionFilter() {
}

$Class* FileNameExtensionFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileNameExtensionFilter, description)},
		{"extensions", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileNameExtensionFilter, extensions)},
		{"lowerCaseExtensions", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileNameExtensionFilter, lowerCaseExtensions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $method(FileNameExtensionFilter, init$, void, $String*, $StringArray*)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(FileNameExtensionFilter, accept, bool, $File*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileNameExtensionFilter, getDescription, $String*)},
		{"getExtensions", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(FileNameExtensionFilter, getExtensions, $StringArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileNameExtensionFilter, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.filechooser.FileNameExtensionFilter",
		"javax.swing.filechooser.FileFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileNameExtensionFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileNameExtensionFilter);
	});
	return class$;
}

$Class* FileNameExtensionFilter::class$ = nullptr;

		} // filechooser
	} // swing
} // javax