
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 0.12.1.0
//   Input filename:  .\example.bond
//   Output filename: example_types.cpp
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#include "example_reflection.h"
#include <bond/core/exception.h>

namespace example
{
    
    const ::bond::Metadata Record::Schema::metadata
        = Record::Schema::GetMetadata();
    
    const ::bond::Metadata Record::Schema::s_name_metadata
        = ::bond::reflection::MetadataInit("name");
    
    const ::bond::Metadata Record::Schema::s_items_metadata
        = ::bond::reflection::MetadataInit("items");

    
} // namespace example
