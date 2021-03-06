/**
* @file include/bin2llvmir/optimizations/idioms/idioms_borland.h
* @brief Borland C/C++ instruction idioms
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#ifndef BIN2LLVMIR_OPTIMIZATIONS_IDIOMS_IDIOMS_BORLAND_H
#define BIN2LLVMIR_OPTIMIZATIONS_IDIOMS_IDIOMS_BORLAND_H

#include "bin2llvmir/optimizations/idioms/idioms_abstract.h"

namespace bin2llvmir {

/**
 * @brief Borland C/C++ instruction idioms
 */
class IdiomsBorland: virtual public IdiomsAbstract {
	friend class IdiomsAnalysis;
	// Add idioms here, if you have found idioms specific for Borland compiler.
};

} // namespace bin2llvmir

#endif
