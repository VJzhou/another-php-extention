/* study extension for PHP */

#ifndef PHP_STUDY_H
# define PHP_STUDY_H

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"

#include "study.h"

#define PHP_STUDY_VERSION "0.1.0"


extern zend_module_entry study_module_entry;
# define phpext_study_ptr &study_module_entry

#ifdef PHP_WIN32
#    define PHP_STUDY_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#    define PHP_STUDY_API __attribute__ ((visibility("default")))
#else
#    define PHP_STUDY_API
#endif


# if defined(ZTS) && defined(COMPILE_DL_STUDY)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

ZEND_BEGIN_MODULE_GLOBALS(study)

ZEND_END_MODULE_GLOBALS(study)

void study_coroutine_util_init();


#endif	/* PHP_STUDY_H */

