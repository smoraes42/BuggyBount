/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:47 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/25 16:29:45 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
 * specified in ’set’ removed from the beginning and the end of the string. */

// abc 
// "ab   dfdjhfjhaajfalk  abcabc"

#include "libft.h"

static int ft_contains(char c, char *set)
{
  int i;
  
  i = 0;
  while (set[i] != '\0')
  {
    if (c == set[i])
      return (1);
    i++;
  }
  return (0);
}



int headfind(char *s1, char *set)
{
    int s1ind;
    int setind;

    s1ind = 0;
    setind = 0;
    while (s1[s1ind] != '\0')
    { 
      
      if (ft_contains(s1[s1ind],set) == 0)
      {
        return (s1ind);
      }
      s1ind++;
      /*
        setind = 0;
        while (set[setind] != '\0')
        {
            if (s1[s1ind] != set[setind])
            {    
                setind++;
                if (set[ind])
                  
            }
                
            else
              return(s1ind);
            setind++;
        }
        */
    }
    return (s1ind);
}

int main() {
  int head = headfind("abcdfeg./ONLY","gefdcba./");
  return 0;
}
int head(char *s1, char *set)
{
	int s1ind;
	int setind;

	s1ind = 0;
	setind = 0;
	while (s1[ind] != '\0')
	{
		while (set[setind] != '\0')
		{
			if (s1[ind] == set[setind])
				ind++;
			else
				return(ind);
			setind++;
		}
		ind++;
	}
	return (ind);
}

int tail(char* s1, char *set)
{
	int	s1l;
	int setind;

	s1l = ft_strlen(s1);
	setind = 0;
	while (s1l >= 0)
	{
		while (set[setind] != '\0')
		{
			if (s1[] == set)
				--;
			else
				return(
		}
		s1l--;
	}
	return (ind);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		ind;
	char	*trimmed;
	int		head;
	int		tail;

	head = head(s1);
	tail = tail(s1);

	trimmed = (char *)malloc (char);
	while (s1[ind])
		return (0);
	return (s1);
}
